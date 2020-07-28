import os
import sys
import glob
import re

HeaderPaths = [r"J:\Coding Projecties\BL2-SDK\src\include\UnrealEngine\Engine\UE4",r"J:\Coding Projecties\BL2-SDK\src\include\UnrealEngine\Core\UE4"]
SDKDumps = r"K:\Borderlands3\OakGame\Binaries\Win64\SDKDumps.txt"

EngineHeaders = [f for f in glob.glob(f"{HeaderPaths[0]}\\*.h") ]
CoreHeaders = [f for f in glob.glob(f"{HeaderPaths[1]}\\*.h") ]

print(f"Engine Headers: {EngineHeaders}\nCore Headers: {CoreHeaders}\n\n")

headerPattern = re.compile(r"^\s*(?:(?:inline|static|class|struct)\s+){0,2}(?!else|typedef|return)\w+\s*\*?\s*(\w*)\s*\([^0]*\)\s*;")
resultPattern = re.compile(r"^\s*(?:(?:inline|static|class|struct)\s+){0,2}(?!else|typedef|return)\w+\s*\*?\s*(\w*)\s*")
typePattern = re.compile(r"\(.*\)")

SDKObjects = open(SDKDumps, "r").readlines()

outputFile = open("GeneratedOutput.cpp", "w")

def parseHeader(header):
	print(f"Parsing Header {header}")
	lines = open(header, "r").readlines()[offset:]
	lastClassIndex = -1

	for i in range(len(lines)):
		l = lines[i]
		if "struct alignas(" in l: continue
		if(not headerPattern.match(l)): continue
		try:
			# print(l)
			cppClassName = ""

			className = ""
			qualifiedClassName = ""

			for z in range(i, 0, -1):
				if "UObject::FindClass(\"Class" not in lines[z]: continue
				className = lines[z].split("Class ")[-1][:-4]
				qualifiedClassName = className
				if "." in className: 
					className = className.split(".")[-1][0:]
				break
				
			for z in range(i, 0, -1):
				if "public:" not in lines[z]: continue
					
				cppClassName = lines[z - 2].split(" ")[1]

				break

			results = resultPattern.search(l)
			resultType = ( results.group(0)[: (len(results.group(1)) * -1) ] ).replace("static ", "")
			functionName = results.group(1)
			functionResult = typePattern.search(l).group(0)
			FUNCTION_DEFINITION = f"{resultType} {cppClassName}::{functionName}{functionResult}"
			# print(functionResult)
			FunctionObjectName = [s for s in SDKObjects if f"{qualifiedClassName}.{functionName}" in s][0].split("Function ")[-1][:-1]

			FUNCTION_DEFINITION += " {\n" \
			f"		static auto fn = (UFunction*)UObject::Find(\"Function\", \"{FunctionObjectName}\");\n" \
			f"		{cppClassName}_{functionName}_Params params;\n\n" \

			parameters = []

			if functionResult != "()":
				if "," not in functionResult: # For whenever we have a function result like `(TEnumAsByte<ETickingGroup> NewTickGroup)`
					parameters = [ (functionResult.split(" ")[-1][:-1] , functionResult.split(" ")[-2][1:] ) ]
				else: # For whenever there's a result like `(bool bNewActive, bool bReset)`
					for param in functionResult.split(","):
						parameters += [ ( param.split(" ")[-1].replace(")",""), param.split(" ")[0].replace("(","") ) ]

			for param in parameters:
				# Stuff like float* ends up becoming float in the params
				FUNCTION_DEFINITION += f"		params.{param[0]} = "
				# FUNCTION_DEFINITION += ("*" + param[0] if "*" in param[1] else param[0]) + ";\n"
				FUNCTION_DEFINITION += (param[0] + ";\n")

			if parameters:
				FUNCTION_DEFINITION += "\n"


			FUNCTION_DEFINITION += \
			"		auto flags = fn->FunctionFlags;\n" \
			"		fn->FunctionFlags |= 0x400;\n" \
			"		static auto defaultObj = StaticClass()->CreateDefaultObject();\n"\
			"		UnrealSDK::pProcessEvent(defaultObj, fn, &params);\n"\
			"		fn->FunctionFlags = flags;\n"

			if("void" not in resultType):
				FUNCTION_DEFINITION += "		return params.ReturnValue;\n"
			FUNCTION_DEFINITION += "	}\n\n"

			FUNCTION_DEFINITION = FUNCTION_DEFINITION.replace("  "," ")

			outputFile.write(FUNCTION_DEFINITION)
		except Exception as x:
			# pass
			print(f"EXCEPTION ({x}) WITH LINE {i}: {l} ")

for header in EngineHeaders:
	parseHeader(header)

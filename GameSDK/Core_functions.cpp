/*
#############################################################################################
# Borderlands 2 (1.0.35.4705) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/
#include "stdafx.h"
#include "GameSDK.h"

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Global Static Class Pointers
# ========================================================================================= #
*/

UClass* UObject::pClassPointer = NULL;
UClass* UField::pClassPointer = NULL;
UClass* UStruct::pClassPointer = NULL;
UClass* UFunction::pClassPointer = NULL;
UClass* UState::pClassPointer = NULL;
UClass* UClass::pClassPointer = NULL;
UClass* UPackage::pClassPointer = NULL;

/*
# ========================================================================================= #
# Basic Functions
# ========================================================================================= #
*/

TArray< UObject* >* UObject::GObjObjects() 
{ 
	TArray< UObject* >* ObjectArray = (TArray< UObject* >*) UHook::pGObjects;
	return ObjectArray; 
} 

char* UObject::GetName() 
{ 
	static char cOutBuffer[ 256 ]; 
	ZeroMemory( cOutBuffer, 256 );

	sprintf_s ( cOutBuffer, "%s", this->Name.GetName() ); 

	return cOutBuffer; 
} 

char* UObject::GetNameCPP() 
{ 
	static char cOutBuffer[ 256 ]; 
	ZeroMemory( cOutBuffer, 256 );

	if ( this->IsA ( UClass::StaticClass() ) ) 
	{ 
		UClass* pClass = (UClass*) this; 
		while ( pClass ) 
		{ 
			if ( ! strcmp ( pClass->GetName(), "Actor" ) ) 
			{ 
				strcpy_s ( cOutBuffer, "A" ); 
				break; 
			} 
			else if ( ! strcmp ( pClass->GetName(), "Object" ) ) 
			{ 
				strcpy_s ( cOutBuffer, "U" ); 
				break; 
			} 

			pClass = (UClass*) pClass->SuperField; 
		} 
	} 
	else 
	{ 
		strcpy_s ( cOutBuffer, "F" ); 
	} 

	strcat_s ( cOutBuffer, this->GetName() ); 

	return cOutBuffer; 
} 

char* UObject::GetFullNameOld() 
{ 
	if ( this->Class && this->Outer ) 
	{ 
		static char cOutBuffer[ 256 ]; 
		ZeroMemory( cOutBuffer, 256 );

		if ( this->Outer->Outer ) 
		{ 
			strcpy_s ( cOutBuffer, this->Class->GetName() ); 
			strcat_s ( cOutBuffer, " " ); 
			strcat_s ( cOutBuffer, this->Outer->Outer->GetName() ); 
			strcat_s ( cOutBuffer, "." ); 
			strcat_s ( cOutBuffer, this->Outer->GetName() ); 
			strcat_s ( cOutBuffer, "." ); 
			strcat_s ( cOutBuffer, this->GetName() ); 
		} 
		else 
		{ 
			strcpy_s ( cOutBuffer, this->Class->GetName() ); 
			strcat_s ( cOutBuffer, " " ); 
			strcat_s ( cOutBuffer, this->Outer->GetName() ); 
			strcat_s ( cOutBuffer, "." ); 
			strcat_s ( cOutBuffer, this->GetName() ); 
		} 

		return cOutBuffer; 
	} 

	return "(null)"; 
} 

void UObject::GetPathName(std::string& result)
{
	if(this)
	{
		if(Outer)
		{
			Outer->GetPathName(result);

			if(Outer->Class != UPackage::StaticClass()
			&& Outer->Outer->Class == UPackage::StaticClass())
			{
				result += ":";
			}
			else
			{
				result += ".";
			}
		}

		AppendName(result);
	}
	else
	{
		result += "None";
	}
}

void UObject::AppendName(std::string& result)
{
	if(!this)
	{
		result += "None";
	}
	else if(ObjectInternalInteger == -1)
	{
		result += "<uninitialized>";
	}
	else
	{
		Name.AppendString(result);
	}
}

std::string UObject::GetFullName()
{
	if(this)
	{
		std::string result;
		result.reserve(128);
		Class->AppendName(result);
		result += " ";
		GetPathName(result);
		return result;
	}
	else
	{
		return "None";
	}
}

bool UObject::IsA ( UClass* pClass ) 
{ 
	for ( UClass* SuperClass = this->Class; SuperClass; SuperClass = ( UClass* ) SuperClass->SuperField ) 
	{ 
		if ( SuperClass == pClass ) 
			return true; 
	} 

	return false; 
} 

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function Core.Object.GetBuildChangelistNumber
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UObject::GetBuildChangelistNumber ( )
{
	static UFunction* pFnGetBuildChangelistNumber = NULL;

	if ( ! pFnGetBuildChangelistNumber )
		pFnGetBuildChangelistNumber = UObject::FindObject<UFunction>("Function Core.Object:GetBuildChangelistNumber");

	UObject_execGetBuildChangelistNumber_Parms GetBuildChangelistNumber_Parms;

	unsigned long funcFlags = pFnGetBuildChangelistNumber->FunctionFlags;
	pFnGetBuildChangelistNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetBuildChangelistNumber, &GetBuildChangelistNumber_Parms, NULL );

	pFnGetBuildChangelistNumber->FunctionFlags = funcFlags;

	return GetBuildChangelistNumber_Parms.ReturnValue;
};

// Function Core.Object.GetEngineVersion
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UObject::GetEngineVersion ( )
{
	static UFunction* pFnGetEngineVersion = NULL;

	if ( ! pFnGetEngineVersion )
		pFnGetEngineVersion = UObject::FindObject<UFunction>("Function Core.Object:GetEngineVersion");

	UObject_execGetEngineVersion_Parms GetEngineVersion_Parms;

	unsigned long funcFlags = pFnGetEngineVersion->FunctionFlags;
	pFnGetEngineVersion->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnGetEngineVersion, &GetEngineVersion_Parms, NULL );

	pFnGetEngineVersion->FunctionFlags = funcFlags;

	return GetEngineVersion_Parms.ReturnValue;
};

#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
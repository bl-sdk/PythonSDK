import os
import re

files = ['Core_classes.h',
'Engine_classes.h',
'GameFramework_classes.h',
'GFxUI_classes.h',
'GearboxFramework_classes.h',
'WillowGame_classes.h',
'AkAudio_classes.h',
'IpDrv_classes.h',
'WinDrv_classes.h',
'XAudio2_classes.h',
'OnlineSubsystemSteamworks_classes.h']

classes = ["AActor",
"ACamera",
"AController",
"ADualWieldActionSkill",
"AGameInfo",
"AGearboxMind",
"AInventoryManager",
"ALiftActionSkill",
"AMissionTracker",
"APawn",
"APlayerController",
"AResourcePoolManager",
"AStatusEffectProxyActor",
"AVehicle",
"AWillowCoopGameInfo",
"AWillowEquipAbleItem",
"AWillowInteractiveObject",
"AWillowInventory",
"AWillowInventoryManager",
"AWillowItem",
"AWillowPawn",
"AWillowPlayerController",
"AWillowPlayerPawn",
"AWillowReplicatedEmitter",
"AWillowShield",
"AWillowTurretWeapon",
"AWillowVehicle",
"AWillowVehicleBase",
"AWillowVehicleWeapon",
"AWillowVendingMachineBlackMarket",
"AWillowWeapon",
"AWillowWeaponPawn",
"AWorldInfo",
"UActionSequence",
"UAIFactoryBase",
"UAnimSequence",
"UAssetLibraryManager",
"UAttributeDefinition",
"UBehaviorBase",
"UBehaviorKernel",
"UBodyClassDefinition",
"UCameraModifierLookAt",
"UChassisDefinition",
"UCustomizationGFxMovie",
"UCylinderComponent",
"UFaceFXAsset",
"UForceFeedbackWaveform",
"UGearboxAIFactory",
"UGearboxCoverStateManager",
"UGearboxDialogComponent",
"UIHitRegionInfoProvider",
"UInteractiveObjectDefinition",
"UIParameterBehavior",
"UIStatusEffectTarget",
"UMaterialInstanceConstant",
"UMaterialInterface",
"UMeshComponent",
"UNavigationHandle",
"UParticleSystemComponent",
"UPhysicalMaterial",
"UPlayerSkillTree",
"UPrimitiveComponent",
"USeqAct_Toggle",
"USequenceAction",
"USequenceOp",
"USkeletalMeshComponent",
"UStaticMeshComponent",
"UUIDataStore_OnlinePlaylists",
"UUIResourceCombinationProvider",
"UVehicleSpawnStationGFxMovie",
"UWillowGlobals"]

dir_path_python = 'C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/'

class Function_def():
	def __init__(self, return_type, name, params, pointers):
		self.return_type = return_type
		self.name = name
		self.params = params
		self.pointers = pointers

class Pointer():
	def __init__(self, pre, t, name):
		self.pre = pre
		self.type = t
		self.name = name

funcs = {}
for clas in files:
	print(clas)
	with open(dir_path_python + clas) as f:
		class_name = None
		for line in f.readlines():
			if line.startswith("class "):
				class_name = line.split(" ")[1].strip()
				funcs[class_name] = {}
			if class_name not in classes:
				continue
			if ');' in line and '*' in line:
				start, end = line.split('(')
				function_name = start.split(' ')[-1]
				return_type = start.split(' ')[:-1]
				params = line.split('(')[-1].split(')')[0]
				pointers = []
				for param in params.split(', '):
					if param.startswith('struct ') or param.startswith('class ') and '**' in param:
						s = param.split(' ')
						pointers.append(Pointer(s[0], s[1], s[2]))
					elif not (param.startswith('struct ') or param.startswith('class ')) and '*' in param:
						s = param.split(' ')
						pointers.append(Pointer(None, ' '.join(s[:-1]), s[-1]))
				if pointers:
					funcs[class_name][function_name] = Function_def(return_type, function_name, params, pointers)

def generate_lambda(fun):
	py_args = fun.params
	init = ""
	for pointer in fun.pointers:
		if pointer.pre:
			pointer_arg = "{} {}** {}".format(pointer.pre, pointer.type, pointer.name)
			init += pointer_arg + " = 0 ; "
		else:
			pointer_arg = "{}* {}".format(pointer.type, pointer.name)
			if pointer.type == 'char':
				init += pointer_arg + " = malloc(sizeof(char) * 0xFF) ; "
			else:
				init += pointer_arg + " = ({0} *)malloc(sizeof({0})) ; ".format(pointer.type)
		py_args = py_args.replace(pointer_arg, "")
	py_args = py_args.strip()
	py_args = py_args.replace(', ,', ',')
	py_args = py_args.replace(', ,', ',')
	py_args = py_args.replace(', ,', ',')
	if py_args.startswith(','):
		py_args = py_args[1:]
	if py_args.endswith(','):
		py_args = py_args[:-1]
	py_args = py_args.strip()
	if py_args:
		py_args = ', ' + py_args
	new_args = ', '.join([parm.split(' ')[-1] for parm in fun.params.split(', ')])
	returned_args = ', '.join([parm.name for parm in fun.pointers])

	return(template.format(class_name = clas, py_args = py_args, init = init, function_name = fun.name, new_args = new_args, returned_args = returned_args))


template = '[]({class_name} &self {py_args}) {{ {init} self.{function_name}({new_args}); return py::make_tuple({returned_args}); }})\n'
init_template = '{class_name}* {variable_name} = 0;'
pydefs = 'C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/pydefs/'

print(funcs)

for clas in funcs.keys():
	if not funcs[clas]:
		continue
	print(clas)
	with open(pydefs + '_Classes_{}.cpp'.format(clas)) as f:
		lines = []
		for line in f.readlines():
			if '.def(' in line:
				function_name = line.split('"')[1]
				if function_name in funcs[clas].keys():
					lines += line.split(',')[0] + ', ' + generate_lambda(funcs[clas][function_name])
					continue
			if '.staticmethod' in line:
				continue
			lines += line
	with open(pydefs + '_Classes_{}.cpp'.format(clas), 'w') as f:
		for line in lines:
			f.write(line)
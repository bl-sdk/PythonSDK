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
import os

dir_path_python = 'C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/'

template = 'UClass* {}::pClassPointer = NULL;'

funcs = {}
for clas in files:
	os.system('cls')
	print(clas)
	with open(dir_path_python + clas) as f:
		for line in f.readlines():
			if line.startswith('class '):
				print(template.format(line.split(' ')[1]))
	input("Press Enter to continue...")
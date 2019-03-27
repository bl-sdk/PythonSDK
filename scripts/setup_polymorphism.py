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

template = 'map["{0}"] = &typeid({0});'

pointers = {}
for clas in files:
	with open(dir_path_python + clas) as f:
		class_name = None
		for line in f.readlines():
			if line.startswith('class '):
				class_name = line.split(" ")[1].strip()
			if line.startswith('			pClassPointer = '):
				num = line.split('[')[-1].split(']')[0]
				pointers[int(num)] = class_name

for num in sorted(pointers.keys()):
	print(template.format(pointers[num]))
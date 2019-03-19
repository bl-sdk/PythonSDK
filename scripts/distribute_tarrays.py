import os
import re

modules = ['Core',
'Engine',
'GameFramework',
'GFxUI',
'GearboxFramework',
'WillowGame',
'AkAudio',
'IpDrv',
'WinDrv',
'XAudio2',
'OnlineSubsystemSteamworks',
'Base']

dir_path_structs = 'C:/Program Files (x86)/Steam/steamapps/common/Borderlands 2/Binaries/plugins/python/include/sdk/structs/'
dir_path_classes = 'C:/Program Files (x86)/Steam/steamapps/common/Borderlands 2/Binaries/plugins/python/include/sdk/classes/'
tarrays_file = 'C:/Program Files (x86)/Steam/steamapps/common/Borderlands 2/Binaries/plugins/python/include/sdk/TArrayTypes.py'

tarrays = {}

header = "._fields_ = "
template = """class {}(Structure):\n\
    pass\n\n"""

with open(tarrays_file) as f:
    lines = f.readlines()
    for index, line in enumerate(lines):
        if header in line:
            tarray_type = lines[index + 1].split('(')[-1].split(')')[0]
            tarrays[tarray_type] = 'class ' + ''.join(lines[index : index + 5]).replace('._fields_','(Structure)\n    _fields_')

for module in modules:
    lines = []
    found = []
    top = []
    done = False
    with open(dir_path_structs + module + '.py') as f:
        after = None
        for line in f.readlines():
            lines.append(line)
            if 'class ' in line:
                defining = line.split(' ')[1].split('(')[0]
                if defining in tarrays.keys():
                    found.append(defining)
                    after = defining
            if line == '\n' and after:
                lines.append(tarrays[after])
                after = None
    with open(dir_path_structs + module + '.py', 'w') as f:
        for l in lines:
            f.write(l)
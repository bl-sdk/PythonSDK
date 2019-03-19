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

with open(tarrays_file) as f:
    lines = f.readlines()
    for index, line in enumerate(lines):
        if header in line:
            tarray_type = lines[index + 1].split('(')[-1].split(')')[0]
            tarrays[tarray_type] = ''.join(lines[index : index + 5])

print(tarrays)

# for module in modules:
#     lens = []
#     with open(dir_path_lua + module + '.lua') as f:
#         for line in f.readlines():
#             if '[0x' in line:
#                 lens += [line.split('0x')[1].split(']')[0]]
#     i = 0
#     lines = []
#     with open(dir_path_python + module + '.py') as f:
#         for line in f.readlines():
#             if '0x' in line:
#                 if '0x)' in line:
#                     print(line)
#                     line = line.replace('0x)', '0x{})'.format(lens[i]))
#                     print(line)
#                 i = i + 1
#             lines.append(line)
#     with open(dir_path_python + module + '.py', 'w') as f:
#         for line in lines:
#             f.write(line)
import os
import re


headers = """class {}(Structure):\n\
    pass\n\n"""

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

dir_path_python = 'C:/Program Files (x86)/Steam/steamapps/common/Borderlands 2/Binaries/plugins/python/include/sdk/classes/'
used = set()
defined = set()


for module in modules:
    top = []
    middle = []
    bottom = []
    with open(dir_path_python + module + '.py') as f:
        in_bottom = False
        for line in f.readlines():
            if 'BL2SDK.g_loadedClasses += [' in line:
                in_bottom = True
            if in_bottom:
                bottom.append(line)
            else:
                middle.append(line)
            if not in_bottom and '._fields_' in line:
                top.append(headers.format(line.split('.')[0]))

    with open(dir_path_python + module + '.py', 'w') as f:
        for line in top:
            f.write(line)
        f.write("def __init__():\n")
        for line in middle:
            f.write("   " + line)
        for line in bottom:
            f.write("   " + line)
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
'OnlineSubsystemSteamworks']

dir_path_lua = 'C:/Program Files (x86)/Steam/steamapps/common/Borderlands 2/Binaries/plugins/include/sdk/classes/'
dir_path_python = 'C:/Program Files (x86)/Steam/steamapps/common/Borderlands 2/Binaries/plugins/python/include/sdk/classes/'
used = set()
defined = set()

used_regex = re.compile(r'.* TArray_(/w+).*')
defined_regex = re.compile(r'.*struct TArray_(/w+) {')

for module in modules:
    lens = []
    with open(dir_path_lua + module + '.lua') as f:
        for line in f.readlines():
            if '[0x' in line:
                lens += [line.split('0x')[1].split(']')[0]]
    i = 0
    lines = []
    with open(dir_path_python + module + '.py') as f:
        for line in f.readlines():
            if '0x' in line:
                if '0x)' in line:
                    print(line)
                    line = line.replace('0x)', '0x{})'.format(lens[i]))
                    print(line)
                i = i + 1
            lines.append(line)
    with open(dir_path_python + module + '.py', 'w') as f:
        for line in lines:
            f.write(line)
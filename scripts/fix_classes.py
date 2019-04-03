import re


function_regex = re.compile(r'\[(\d+)\] Class (\w+)\.(\w+).*')
functions = {}
with open('C:\\SDK_GEN\\BL2\\ObjectsDump.txt') as f:
    lookahead = None
    for line in f.readlines():
        if '] Class ' in line:
            matches = function_regex.match(line)
            if matches:
                id, module, clas = matches.groups()
                if module not in functions.keys():
                    functions[module] = {}
                functions[module][clas] = id


sdk_dir = 'C:\\Users\\abahb\\source\\repos\\BL2-SDK\\bl2-sdk\\'
for module in functions.keys():
    lines = []
    with open(sdk_dir + module + '_classes.h') as f:
        new_id = None
        for line in f.readlines():
            if line.startswith('class '):
                clas = line.split(' ')[1][1:].strip()
                if clas in functions[module].keys():
                    new_id = functions[module][clas]
            if 'UObject::GObjObjects()->Data' in line:
                old_id = line.split('[')[1].split(']')[0]
                line = line.replace(old_id, str(int(new_id)))
            lines.append(line)
    with open(sdk_dir + module + '_classes.h', 'w') as f:
        for line in lines:
            f.write(line)
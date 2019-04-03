import re


function_regex = re.compile(r'\[(\d+)\] Function (\w+)\.(\w+)\.(\w+).*')
property_regex = re.compile(r'\[(\d+)\] \w+ (\w+)\.(\w+)\.(\w+)\.(\w+).*')
functions = {}
with open('C:\\SDK_GEN\\BL2\\ObjectsDump.txt') as f:
    lookahead = None
    for line in f.readlines():
        if '] Function ' in line:
            matches = function_regex.match(line)
            if matches:
                id, module, clas, func = matches.groups()
                if module not in functions.keys():
                    functions[module] = {}
                functions[module]['{}.{}'.format(clas, func)] = {'id': id, 'properties': {}}
        elif 'Property ' in line:
            matches = property_regex.match(line)
            if matches:
                id, module, clas, func, prop = matches.groups()
                if module in functions.keys() and '{}.{}'.format(clas, func) in functions[module].keys():
                    functions[module]['{}.{}'.format(clas, func)]['properties'][prop] = id


sdk_dir = 'C:\\Users\\abahb\\source\\repos\\BL2-SDK\\bl2-sdk\\'
for module in functions.keys():
    lines = []
    with open(sdk_dir + module + '_functions.cpp') as f:
        new_id = None
        for line in f.readlines():
            if line[0] != '\t' and '::' in line:
                clas = line.split('::')[0].split(' ')[-1].strip()[1:]
            if 'pFn' in line and 'UObject::GObjObjects()->Data' in line:
                func = clas + '.' + line.split('pFn')[1].split(' ')[0]
                if func in functions[module].keys():
                    new_id = functions[module][func]
                old_id = line.split('[')[1].split(']')[0]
                print(new_id)
                line = line.replace(old_id, str(int(new_id['id'])))
            lines.append(line)
    with open(sdk_dir + module + '_functions.cpp', 'w') as f:
        for line in lines:
            f.write(line)
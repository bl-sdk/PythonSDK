import re


function_regex = re.compile(r'\[(\d+)\] Function (\w+)\.(\w+)\.(\w+).*')
property_regex = re.compile(r'\[(\d+)\] \w+ (\w+)\.(\w+)\.(\w+)\.(\w+).*')
functions = {}
with open('ObjectsDump.txt') as f:
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


function_regex = re.compile(r'	g_classFuncs\["(\w+)"\]\["(\w+)"\] = {')
name_format = 'name = "{}",'

from enum import Enum
class Location(Enum):
    EXPECTING_FUNC_START = 0
    EXPECTING_FIELD_START = 1
    EXPECTING_FIELD_NAME = 2
    EXPECTING_FIELD_INDEX = 3
    EXPECTING_FIELD_OR_END = 4
    EXPECTING_FUNC_INDEX = 5


sdk_dir = 'C:\\Users\\abahb\\source\\repos\\BL2-SDK\\lua\\include\\sdk\\funcs\\'
for module in functions.keys():
    with open(sdk_dir + module + '.lua') as f:
        with open(sdk_dir + module + '.lua.new', 'w') as f_new:
            location = Location.EXPECTING_FUNC_START
            for line in f.readlines():
                if location == Location.EXPECTING_FUNC_START and 'g_classFuncs' in line:
                    matches = function_regex.match(line)
                    if matches:
                        clas, func = matches.groups()
                        if func.startswith('event'):
                            func = func[5:]
                        if '{}.{}'.format(clas, func) not in functions[module].keys():
                            clas = clas[1:]
                        location = Location.EXPECTING_FIELD_START
                elif location == Location.EXPECTING_FIELD_START and '		fields = {\n' == line:
                    location = Location.EXPECTING_FIELD_OR_END
                elif location == Location.EXPECTING_FIELD_OR_END and '			{\n' == line:
                    location = Location.EXPECTING_FIELD_NAME
                elif location == Location.EXPECTING_FIELD_NAME and line.startswith('				name = "'):
                    field_name = line.split('"')[1]
                    location = Location.EXPECTING_FIELD_INDEX
                elif location == Location.EXPECTING_FIELD_INDEX and line.startswith('				index = '):
                    index = line.split(' ')[-1].split(',')[0]
                    line = line.replace(index, str(int(functions[module]['{}.{}'.format(clas, func)]['properties'][field_name])))
                    location = Location.EXPECTING_FIELD_OR_END
                elif location == Location.EXPECTING_FIELD_OR_END and line == '		},\n':
                    location = Location.EXPECTING_FUNC_INDEX
                elif location == Location.EXPECTING_FUNC_INDEX and line.startswith('		index = '):
                    # modify index here
                    index = line.split(' ')[-1].split(',')[0]
                    line = line.replace(index, str(int(functions[module]['{}.{}'.format(clas, func)]['id'])))
                    location = Location.EXPECTING_FUNC_START
                f_new.write(line)

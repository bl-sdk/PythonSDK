import os
import re

dir_path = os.path.dirname(os.path.realpath(__file__))
funcs = {}

regex = re.compile(r'^.* (\w+)::(\w+).*\)$')

for root, dirs, files in os.walk(dir_path):
    for file in files:
        if file.endswith("_functions.cpp"):
            with open(root + '\\' + file) as f:
                module = file.split('_')[0]
                funcs[module] = []
                in_funcs = False
                for line in f.readlines():
                    if not in_funcs and not line.startswith('# Functions'):
                        continue
                    in_funcs = True
                    found = regex.match(line)
                    if found:
                        clas, fun = found.groups()
                        funcs[module].append((clas, fun))

classFunc_regex = re.compile(r'.*g_classFuncs\["(\w+)"\] = {')

lua_sdk_path = "C:\\Program Files (x86)\\Steam\\steamapps\\common\\Borderlands 2\\Binaries\\plugins\\include\\sdk\\funcs\\"
from os import listdir
from os.path import isfile, join
onlyfiles = [f for f in listdir(lua_sdk_path) if isfile(join(lua_sdk_path, f)) and f.endswith('.lua')]
print(onlyfiles)
for filename in onlyfiles:
    index = 0
    l = 0
    with open(lua_sdk_path + filename) as f:
        with open(lua_sdk_path + filename + '.new', 'w') as f_out:
            module_name = filename.split('.')[0]
            print(module_name)
            classes = set()
            for fun in funcs[module_name]:
                classes.add(fun[0])
            for clas in classes:
                f_out.write('g_classFuncs["{}"] = {{}}\n'.format(clas))
            for line in f.readlines():
                l += 1
                found = classFunc_regex.match(line)
                if found:
                    func = found.groups()[0]
                    clas, fun = funcs[module_name][index]
                    if func.lower() == fun.lower() or func.lower() == 'event' + fun.lower():
                        f_out.write(line.replace(func, '{}"]["{}'.format(clas, func)))
                    else:
                        print(module_name)
                        print('bad')
                        print(l, clas, fun, func)
                        exit()
                    index += 1
                else:
                    f_out.write(line)

#
# template = \
# """struct {0};
# struct TArray_{0} {{
# 	struct {0}* Data;
# 	int Count;
# 	int Max;
# }};
# """
#
# for tarray in (used - defined):
#     print(template.format(tarray))
#
# for tarray in (used - defined):
#     print('table.insert(g_TArrayTypes, "{}")'.format(tarray))

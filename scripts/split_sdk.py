import os
import re

top = """#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_{}(py::module &m)
{{
"""

bottom = """
}"""

files = ['gamedefines.cpp']

dir_path_python = 'C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/pydefs/'

dir_path_h = 'C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/'

structs = {}
classes = {}
for filename in os.listdir(dir_path_h):
    if '_classes.h' in filename or '_structs.h' in filename:
        objs = []
        with open(dir_path_h + filename) as f:
            for line in f.readlines():
                if line.startswith('class ') or line.startswith('struct '):
                    name = line.split(' ')[1].strip()
                    objs.append(name)
        if '_classes.h' in filename:
            classes[filename.split('.')[0]] = objs
        else:
            structs[filename.split('.')[0]] = objs
            



for s in structs.keys():
    with open(dir_path_python + s + '.cpp', 'w') as f:
        f.write(top.format(s))
        for sf in structs[s]:
            try:
                with open(dir_path_python + '_Structs_{}.cpp'.format(sf)) as fs:
                    lines = fs.readlines()
                    write = False
                    for line in lines:
                        if 'class_' in line:
                            write = True
                        if write:
                            f.write(line)
                        if ';' in line:
                            write = False
            except Exception as e:
                print(e)
        f.write(bottom)

for s in classes.keys():
    with open(dir_path_python + s + '.cpp', 'w') as f:
        f.write(top.format(s))
        for sf in classes[s]:
            try:
                with open(dir_path_python + '_Classes_{}.cpp'.format(sf)) as fs:
                    lines = fs.readlines()
                    write = False
                    for line in lines:
                        if 'class_' in line:
                            write = True
                        if write:
                            f.write(line)
                        if line.strip() == ';':
                            write = False
            except Exception as e:
                print(e)
        f.write(bottom)


# for filename in new_files:
# 	print('void Export_pystes{}(py::module &m);'.format(filename))
# 	with open(dir_path_python + filename + '.cpp', 'w') as f:
# 		f.write(top.format(filename))
# 		for line in new_files[filename]:
# 			f.write(line)
# 		f.write(bottom)
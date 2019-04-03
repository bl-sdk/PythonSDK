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

classes = {}
for filename in os.listdir(dir_path_h):
    if '_classes.h' in filename or '_structs.h' in filename:
        objs = {}
        with open(dir_path_h + filename) as f:
            c = None
            fields = []
            for line in f.readlines():
                if line.startswith('class ') or line.startswith('struct '):
                    c = line.split(' ')[1].strip()
                if ' : 1;' in line:
                    field = line.split(' : 1;')[0].split(' ')[-1]
                    fields.append(field)
                if line == '};\n':
                    objs[c] = fields
                    c = None
                    fields = []
        classes[filename.split('.')[0]] = objs

bitfield_def = '\t\t.def_property("{field_name}", []({class_name} &self){{return self.{field_name};}}, []({class_name} &self, bool value){{self.{field_name} = value ? 1 : 0;}})\n'

for s in classes.keys():
    lines = []
    with open(dir_path_python + s + '.cpp') as f:
        for line in f.readlines():
            lines.append(line)
            if 'class_<' in line:
                c = line.split('class_<')[1].strip().split(' ')[0].split(',')[0].strip()
                if c in classes[s].keys():
                    for field in classes[s][c]:
                        lines.append(bitfield_def.format(field_name=field, class_name=c))
    with open(dir_path_python + s + '.cpp', 'w') as f:
        for line in lines:
            f.write(line)


# for filename in new_files:
# 	print('void Export_pystes{}(py::module &m);'.format(filename))
# 	with open(dir_path_python + filename + '.cpp', 'w') as f:
# 		f.write(top.format(filename))
# 		for line in new_files[filename]:
# 			f.write(line)
# 		f.write(bottom)
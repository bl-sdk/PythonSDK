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

class_def = '\tpy::class_< {class_with_parent} >(m, "{class_name}")\n'
bitfield_def = '\t\t.def_property("{field_name}", []({class_name} &self){{return self.{field_name};}}, []({class_name} &self, bool value){{self.{field_name} = value ? 1 : 0;}})\n'
staticclass_def = '\t\t.def_static("StaticClass", &{class_name}::StaticClass, py::return_value_policy::reference)\n'
variable_def = '\t\t.def_readwrite("{var_name}", &{class_name}::{var_name}{policy})\n'
function_def = '\t\t.def("{func_name}", &{class_name}::{func_name}{policy})\n'
policy_def = ', py::return_value_policy::reference'


dir_path_python = 'C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/pydefs/'

dir_path_h = 'C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/'

classes = {}
for filename in os.listdir(dir_path_h):
    if '_classes.h' in filename or ('_structs.h' in filename and not '_f_' in filename):
        objs = {}
        with open(dir_path_h + filename) as f:
            c = None
            fields = []
            variables = []
            functions = []
            static_functions = []
            for line in f.readlines():
                if line.startswith('class ') or line.startswith('struct '):
                    c = line.split(' ')[1].strip()
                    objs[c] = {}
                    if ':' in line:
                        parent = line.split(' ')[-1].strip()
                        objs[c]['parent'] = parent
                if ' : 1;' in line:
                    field = line.split(' : 1;')[0].split(' ')[-1]
                    fields.append(field)
                elif line.startswith('\t') and not line.startswith('\t\t') and line.strip() != '};':
                    line = line.split('//')[0].strip()
                    if line.endswith(';') and line[-2] != ')' and not 'pClassPointer' in line:
                        needs_reference = '*' in line or 'class ' in line or 'struct ' in line or 'TArray' in line
                        name = line.split(' ')[-1][:-1]
                        variables.append((name, needs_reference))
                    elif line.endswith(');') and not line.startswith('static') and not line.startswith('virtual') and not line.startswith('template'):
                        needs_reference = line.startswith('TArray') or line.startswith('class') or line.startswith('struct')
                        name = line.split('(')[0].split(' ')[-1]
                        functions.append((name, needs_reference))
                    elif line.startswith('static') and 'StaticClass' in line:
                        objs[c]['static'] = True
                if line == '};\n':
                    objs[c]['bitfields'] = fields
                    objs[c]['variables'] = variables
                    objs[c]['functions'] = functions
                    c = None
                    fields = []
                    variables = []
                    functions = []
        classes[filename.split('.')[0]] = objs
        break


  # print('void Export_pystes{}(py::module &m);'.format(filename))
for module in classes.keys():
    with open(dir_path_python + module + '.cpp', 'w') as f:
        f.write(top.format(module))
        objs = classes[module]
        for ck in objs.keys():
            c = f[ck]
            name = ck
            if 'parent' in c.keys():
                name = '{}, {}'.format(name, c[parent])
            f.write(class_def.format(class_with_parent=name, class_name=ck))
            if 'static' in c.keys():
                f.write(staticclass_def.format(class_name=ck))
            if c['bitfields']:
                for field in c['bitfields']:
                    f.write(bitfield_def.format(class_name=ck, field_name=field))
            if c['variables']:
                for variable in c['variables']:
                    policy = policy_def if variable[1] else ''
                    f.write(bitfield_def.format(class_name=ck, var_name=variable[0], policy=policy))
            if c['functions']:
                for function in c['functions']:
                    policy = policy_def if function[1] else ''
                    f.write(bitfield_def.format(class_name=ck, func_name=function[0], policy=policy))
            f.write(';\n')
        f.write(bottom)

# for s in classes.keys():
#     lines = []
#     with open(dir_path_python + s + '.cpp') as f:
#         for line in f.readlines():
#             lines.append(line)
#             if 'class_<' in line:
#                 c = line.split('class_<')[1].strip().split(' ')[0].split(',')[0].strip()
#                 if c in classes[s].keys():
#                     for field in classes[s][c]:
#                         lines.append(bitfield_def.format(field_name=field, class_name=c))
#     with open(dir_path_python + s + '.cpp', 'w') as f:
#         for line in lines:
#             f.write(line)


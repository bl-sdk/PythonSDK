import os
import re

top = """#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes{}(py::module &m)
{{
"""

bottom = """
}"""

files = ['gamedefines.cpp']

dir_path_python = 'C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/pydefs/'

new_files = {}

for file in files:
    with open(dir_path_python + file) as f:
        lines = f.readlines()
        class_name = None
        for line in lines:
            if 'class_' in line:
                class_name = line.split('(')[0].split('_')[1].replace('*', '').replace('<', '_').replace('>', '').strip().replace(' ', '')
                new_files[class_name] = [line]
            elif class_name:
                new_files[class_name].append(line)
            if ';' in line:
                class_name = None


for filename in new_files:
	print('void Export_pystes{}(py::module &m);'.format(filename))
# 	with open(dir_path_python + filename + '.cpp', 'w') as f:
# 		f.write(top.format(filename))
# 		for line in new_files[filename]:
# 			f.write(line)
# 		f.write(bottom)
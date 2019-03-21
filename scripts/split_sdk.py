import os
import re

top = """#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_{}()
{{
"""

bottom = """  ;
}"""

files = ['_Structs.cpp']

dir_path_python = 'C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/pydefs/'

for file in files:
    with open(dir_path_python + file) as f:
        lines = f.readlines()
        x = -1
        while x < len(lines):
            buf = []
            x += 1
            line = lines[x]
            if 'class_' in line:
                class_name = line.split('<')[1].split('>')[0].strip()
                while ';' not in line:
                    buf.append(line)
                    x += 1
                    line = lines[x]
                with open(dir_path_python + file.replace('.cpp', '_') + class_name + '.cpp', 'w') as f:
                    f.write(top.format(class_name))
                    for line in buf:
                        f.write(line)
                    f.write(bottom)
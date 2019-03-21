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

files = ['_Structs.cpp', '_Classes.cpp']

dir_path_python = 'C:/Users/abahb/source/repos/BL2-SDK/backup/'

for file in files:
    with open(dir_path_python + file) as f:
        lines = f.readlines()
        for line in lines:
            if 'class_' in line:
                class_name = line.split('<')[1].split('>')[0].split(',')[0].strip()
                print("Export_pystes_{}()".format(class_name))
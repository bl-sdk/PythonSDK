import os
import re

dir_path = os.path.dirname(os.path.realpath(__file__))
used = set()
defined = set()

used_regex = re.compile(r'.* TArray_(\w+).*')
defined_regex = re.compile(r'.*struct TArray_(\w+) {')

for root, dirs, files in os.walk(dir_path):
    for file in files:
        if file.endswith(".lua"):
            with open(root + '\\' + file) as f:
                for line in f.readlines():
                    found = used_regex.match(line)
                    if found:
                        used.add(found.groups()[0])

                    found = defined_regex.match(line)
                    if found:
                        defined.add(found.groups()[0])


template = \
"""struct {0};
struct TArray_{0} {{
	struct {0}* Data;
	int Count;
	int Max;
}};
"""

for tarray in (used - defined):
    print(template.format(tarray))

for tarray in (used - defined):
    print('table.insert(g_TArrayTypes, "{}")'.format(tarray))

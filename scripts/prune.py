from os import listdir, remove

sdk_dir = 'C:\\Users\\abahb\\source\\repos\\BL2-SDK\\bl2-sdk\\pydefs\\'

relationships = {}
empty = {}

for filename in listdir(sdk_dir):
	is_empty = False
	if '_Class' in filename:
		with open(sdk_dir + filename) as f:
			class_name = None
			count = 0
			for line in f.readlines():
				if 'py::class_' in line:
					count = 0
					parent_name = None
					obj_def = line.split('<')[1].split('>')[0].strip()
					class_name = obj_def.split(',')[0].strip()
					if len(obj_def.split(',')) > 1:
						parent_name = obj_def.split(',')[1].strip()
						if parent_name not in relationships.keys():
							relationships[parent_name] = []
						relationships[parent_name].append(class_name)
				if class_name and ';' in line:
					if count <= 2:
						empty[class_name] = parent_name
						is_empty = True
				if class_name and line.strip():
					count = count + 1

actual_empty = {}
for class_name in empty.keys():
	if class_name not in relationships.keys():
		actual_empty[class_name] = empty[class_name]
		remove(sdk_dir + "_Classes_{}.cpp".format(class_name))

empty = actual_empty

typemap = "C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/TypeMap.h"
lines = ""
with open(typemap) as f:
	for line in f.readlines():
		if line.startswith("	{"):
			class_name = line.split('(')[1].split(')')[0]
			if class_name in empty.keys():
				parent = empty[class_name]
				if parent != 'UObject':
					line = line.replace('({})'.format(class_name), '({})'.format(parent))
				else:
					line = ""
		lines += line

with open(typemap, 'w') as f:
	f.write(lines)

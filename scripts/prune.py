from os import listdir

sdk_dir = 'C:\\Users\\abahb\\source\\repos\\BL2-SDK\\bl2-sdk\\pydefs\\'

relationships = {}
empty = []

for filename in listdir(sdk_dir):
	if 'Class' in filename:
		with open(sdk_dir + filename) as f:
			class_name = None
			count = 0
			for line in f.readlines():
				if 'py::class_' in line:
					count = 0
					obj_def = line.split('<')[1].split('>')[0].strip()
					class_name = obj_def.split(',')[0]
					if len(obj_def) > 1:
						parent_name = obj_def[1].strip()
						if parent_name not in relationships.keys():
							relationships[parent_name] = []
					relationships[parent_name].append(class_name)
				if class_name and ';' in line:
					if count <= 2:
						empty.append(class_name)
				if class_name and line.strip():
					count = count + 1

for e in empty:
	if e not in relationships.keys():
		print(e)
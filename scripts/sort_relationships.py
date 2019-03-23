from os import listdir

sdk_dir = 'C:\\Users\\abahb\\source\\repos\\BL2-SDK\\bl2-sdk\\pydefs\\'

relationships = {}

for filename in listdir(sdk_dir):
	with open(sdk_dir + filename) as f:
		for line in f.readlines():
			if 'py::class_' in line:
				obj_def = line.split('<')[1].split('>')[0].strip()
				objs = obj_def.split(',')
				if len(objs) > 1:
					child = objs[0].strip()
					parent = objs[1].strip()
					if parent not in relationships.keys():
						relationships[parent] = []
					relationships[parent].append(child)
				if objs[0] not in relationships.keys():
					relationships[objs[0]] = []

to_check = ['UObject']
while to_check:
	current = to_check.pop()
	to_check += relationships[current]
	del relationships[current]
	print("	Export_pystes_{}(m);".format(current))
for key in relationships.keys():
	print("	Export_pystes_{}(m);".format(key))
	
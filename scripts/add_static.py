from os import listdir

sdk_dir = 'C:\\Users\\abahb\\source\\repos\\BL2-SDK\\bl2-sdk\\pydefs\\'

relationships = {}

template = '		.def_static("StaticClass", &{}::StaticClass, py::return_value_policy::reference)\n'

for filename in listdir(sdk_dir):
	if 'Class' in filename:
		lines = []
		with open(sdk_dir + filename) as f:
			for line in f.readlines():
				lines.append(line)
				if 'py::class_' in line:
					obj_def = line.split('<')[1].split('>')[0].strip()
					obj = obj_def.split(',')[0]
					lines.append(template.format(obj))

		with open(sdk_dir + filename, 'w') as f:
			for line in lines:
				f.write(line)
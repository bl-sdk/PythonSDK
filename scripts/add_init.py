from os import listdir

sdk_dir = 'C:\\Users\\abahb\\source\\repos\\BL2-SDK\\bl2-sdk\\pydefs\\'

relationships = {}

template = '\t\t.def(py::init<>())\n'

for filename in listdir(sdk_dir):
	if '_structs' in filename:
		lines = []
		with open(sdk_dir + filename) as f:
			for line in f.readlines():
				lines.append(line)
				if 'py::class_' in line:
					lines.append(template)

		with open(sdk_dir + filename, 'w') as f:
			for line in lines:
				f.write(line)
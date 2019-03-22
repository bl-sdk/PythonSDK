import os
import re

classes = ['Core_classes.h']

dir_path_python = 'C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/'
function_definition = re.compile(r'	(([a-z]\w+ *)+) (\w+)\((.*\));')
object_reference = re.compile(r'(struct|class) (\w+)\*\* (\w+)')
native_reference = re.compile(r'(\(|, )(([a-z]\w+ *)+)\* (\w+)')

class Function_def():
	def __init__(self, return_type, name, params, pointers):
		self.return_type = return_type
		self.name = name
		self.params = params
		self.pointers = pointers

class Pointer():
	def __init__(self, pre, t, name):
		self.pre = pre
		self.type = t
		self.name = name

funcs = {}
for clas in classes:
	with open(dir_path_python + clas) as f:
		class_name = None
		for line in f.readlines():
			if line.startswith("class "):
				class_name = line.split(" ")[1].strip()
				funcs[class_name] = {}
			if ');' in line and '*' in line:
				fd_match = re.match(function_definition, line)
				if fd_match:
					_, return_type, function_name, function_params = fd_match.groups()
					params = line.split('(')[-1].split(')')[0]
					pointers = []
					for o_match in re.finditer(object_reference, line):
						class_or_struct, obj_type, param_name =  o_match.groups()
						pointers.append(Pointer(class_or_struct, obj_type, param_name))
					for n_match in re.finditer(native_reference, line):
						opener, param_type, _, param_name = n_match.groups()
						pointers.append(Pointer(None, param_type, param_name))
					if pointers:
						funcs[class_name][function_name] = Function_def(return_type, function_name, params, pointers)

def generate_lambda(fun):
	py_args = fun.params
	init = ""
	for pointer in fun.pointers:
		if pointer.pre:
			pointer_arg = "{} {}** {}".format(pointer.pre, pointer.type, pointer.name)
			init += pointer_arg + " = 0 ; "
		else:
			pointer_arg = "{}* {}".format(pointer.type, pointer.name)
			if pointer.type == 'char':
				init += pointer_arg + " = malloc(sizeof(char) * 0xFF) ; "
			else:
				init += pointer_arg + " = malloc(sizeof({})) ; ".format(pointer.type)
		py_args = py_args.replace(pointer_arg, "")
	py_args = py_args.strip()
	py_args = py_args.replace(', ,', ',')
	py_args = py_args.replace(', ,', ',')
	py_args = py_args.replace(', ,', ',')
	if py_args.startswith(','):
		py_args = py_args[1:]
	if py_args.endswith(','):
		py_args = py_args[:-1]
	py_args = py_args.strip()
	if py_args:
		py_args = ', ' + py_args
	new_args = ', '.join([parm.split(' ')[-1] for parm in fun.params.split(', ')])
	returned_args = ', '.join([parm.name for parm in fun.pointers])

	return(template.format(class_name = clas, py_args = py_args, init = init, function_name = fun.name, new_args = new_args, returned_args = returned_args))


template = '[]({class_name} &self {py_args}) {{ {init} self.{function_name}({new_args}); return py::make_tuple({returned_args}); }})\n'
init_template = '{class_name}* {variable_name} = 0;'
pydefs = 'C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/pydefs/'

for clas in funcs.keys():
	if not funcs[clas]:
		continue
	print(clas)
	with open(pydefs + '_Classes_{}.cpp'.format(clas)) as f:
		lines = []
		for line in f.readlines():
			if '.def(' in line:
				function_name = line.split('"')[1]
				if function_name in funcs[clas].keys():
					lines += line.split(',')[0] + ', ' + generate_lambda(funcs[clas][function_name])
					continue
			lines += line
	with open(pydefs + '_Classes_{}.cpp'.format(clas), 'w') as f:
		for line in lines:
			f.write(line)
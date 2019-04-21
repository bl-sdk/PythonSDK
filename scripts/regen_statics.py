import os
import re

top = """#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_{}(py::module &m)
{{
"""

bottom = """
}"""

class_def = '\tpy::class_< {class_with_parent} >(m, "{class_name}")\n'
bitfield_def = '\t\t.def_property("{field_name}", []({class_name} &self){{return self.{field_name};}}, []({class_name} &self, bool value){{self.{field_name} = value ? 1 : 0;}})\n'
staticclass_def = '\t\t.def_static("StaticClass", &{class_name}::StaticClass, py::return_value_policy::reference)\n'
variable_def = '\t\t.def_readwrite("{var_name}", &{class_name}::{var_name}{policy})\n'
function_def = '\t\t.def{static_def}("{func_name}", &{class_name}::{func_name}{policy})\n'
policy_def = ', py::return_value_policy::reference'
reference_def = '\t\t.def{static_def}("{func_name}", {l}'
reference_template = '[]({class_name} &self {py_args}) {{ {init} {capture} self.{function_name}({new_args}); return py::make_tuple({returned_args}); }})\n'

dir_path_python = 'C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/pydefs/'

dir_path_h = 'C:/Users/abahb/source/repos/BL2-SDK/bl2-sdk/'

def generate_lambda(clas, fun):
	py_args = fun.params
	init = ""
	replaced = []
	for pointer in fun.pointers:
		replaced.append(pointer.name)
		if pointer.pre:
			pointer_arg = "{} {} py{}".format(pointer.pre, pointer.type, pointer.name)
			init += pointer_arg + " = 0 ; "
		else:
			pointer_arg = "{} py{}".format(pointer.type, pointer.name)
			if pointer.type == 'char':
				init += pointer_arg + " = malloc(sizeof(char) * 0xFF) ; "
			else:
				init += pointer_arg + " = ({0})malloc(sizeof({1})) ; ".format(pointer.type, pointer.type[:-1])
		py_args = py_args.replace(pointer_arg.replace(" py", " "), "")
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
	new_args = ', '.join([parm.split(' ')[-1] if parm.split(' ')[-1] not in replaced else "py" + parm.split(' ')[-1] for parm in fun.params.split(', ')])
	returned_args = ', '.join(["*py" + parm.name for parm in fun.pointers])
	capture =  ""
	if fun.return_type != "void":
		capture = '{} ret = '.format(fun.return_type)
		if returned_args:
			returned_args = 'ret, ' + returned_args
		else:
			returned_args = 'ret'

	return(reference_template.format(class_name = clas, py_args = py_args, init = init, capture = capture, function_name = fun.name, new_args = new_args, returned_args = returned_args))

class Function_def():
	def __init__(self, return_type, name, params, pointers, static = False):
		self.return_type = return_type
		self.name = name
		self.params = params
		self.pointers = pointers
		self.static = static

class Pointer():
	def __init__(self, pre, t, name):
		self.pre = pre
		self.type = t
		self.name = name

classes = {}
for filename in os.listdir(dir_path_h):
	if '_classes.h' in filename or ('_structs.h' in filename and not '_f_' in filename):
		objs = {}
		with open(dir_path_h + filename) as f:
			c = None
			fields = []
			variables = []
			functions = []
			static_functions = []
			reference_functions = {}
			for line in f.readlines():
				if line.startswith('class ') or line.startswith('struct '):
					c = line.split(' ')[1].strip()
					objs[c] = {}
					if ':' in line:
						objs[c]['parent'] = line.split(' ')[-1].strip()
				if '[' in line.split('//')[0]:
					continue
				if ' : 1;' in line:
					field = line.split(' : 1;')[0].split(' ')[-1]
					fields.append(field)
				elif line.startswith('\t') and not line.startswith('\t\t') and line.strip() != '};':
					line = line.split('//')[0].strip()
					if line.endswith(';') and line[-2] != ')' and not 'pClassPointer' in line:
						needs_reference = '*' in line or 'class ' in line or 'struct ' in line or 'TArray' in line
						name = line.split(' ')[-1].split('\t')[-1][:-1].strip()
						variables.append((name, needs_reference))
					elif line.endswith(');') and not line.startswith('virtual') and not line.startswith('template') and not (line.startswith('static') and 'StaticClass' in line):
						static = line.startswith('static')
						if static:
							line = line[len('static '):]
						if not '*' in line:
							needs_reference = line.startswith('TArray') or line.startswith('class') or line.startswith('struct')
							name = line.split('(')[0].split(' ')[-1].split('\t')[-1]
							functions.append((name, needs_reference, static))
						else:
							start, end = line.split('(')
							function_name = start.split(' ')[-1]
							return_type = ' '.join(start.split(' ')[:-1]).strip()
							params = line.split('(')[-1].split(')')[0]
							pointers = []
							for param in params.split(', '):
								if 'TArray' in param:
									continue
								if (param.startswith('struct ') or param.startswith('class ')) and '**' in param:
									s = param.split(' ')
									pointers.append(Pointer(s[0], s[1], s[2]))
								elif not param.startswith('struct ') and not param.startswith('class ') and '*' in param:
									s = param.split(' ')
									pointers.append(Pointer(None, ' '.join(s[:-1]), s[-1]))
							if pointers:
								reference_functions[function_name] = Function_def(return_type, function_name, params, pointers, static)
							else:
								needs_reference = line.startswith('TArray') or line.startswith('class') or line.startswith('struct')
								name = line.split('(')[0].split(' ')[-1].split('\t')[-1]
								functions.append((name, needs_reference, static))
					elif line.startswith('static') and 'StaticClass' in line:
						objs[c]['static'] = True
				if line == '};\n' or line.endswith(' {};\n'):
					objs[c]['bitfields'] = fields
					objs[c]['variables'] = variables
					objs[c]['functions'] = functions
					objs[c]['reference_functions'] = reference_functions
					c = None
					fields = []
					variables = []
					functions = []
					reference_functions = {}
		classes[filename.split('.')[0]] = objs


  # print('void Export_pystes{}(py::module &m);'.format(filename))
for module in classes.keys():
	objs = classes[module]
	replacements = {}
	for ck in objs.keys():
		c = objs[ck]
		name = ck
		if 'parent' in c.keys():
			name = '{}, {}'.format(name, c['parent'])
		if c['functions']:
			for function in c['functions']:
				policy = policy_def if function[1] else ''
				if function[2] and policy:
					replacements['&{}::{})'.format(ck, function[0])] = (function_def.format(static_def='' if not function[2] else '_static', class_name=ck, func_name=function[0], policy=policy))
		if c['reference_functions']:
			for reference_function in c['reference_functions'].keys():
				if c['reference_functions'][reference_function].static:
					replacements['&{}::{})'.format(ck, c['reference_functions'][reference_function].name)] = (reference_def.format(static_def='' if not c['reference_functions'][reference_function].static else '_static', func_name=reference_function, l=generate_lambda(ck, c['reference_functions'][reference_function])))
					# print('&{}::{})'.format(ck, c['reference_functions'][reference_function].name), replacements['&{}::{})'.format(ck, c['reference_functions'][reference_function].name)])
	with open(dir_path_python + module + '.cpp', 'r') as f:
		lines = f.readlines()
	with open(dir_path_python + module + '.cpp', 'w') as f:
		for line in lines:
			for key in replacements.keys():
				if key in line:
					line = replacements[key]
			f.write(line)
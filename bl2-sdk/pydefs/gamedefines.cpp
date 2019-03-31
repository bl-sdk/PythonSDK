#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_gamedefines(py::module &m)
{
	py::class_< FName >(m, "FName")
		.def_readwrite("Index", &FName::Index)
		.def_readwrite("Number", &FName::Number)
		.def("GetName", &FName::GetName, py::return_value_policy::reference)
		;
	py::class_< FNameEntry >(m, "FNameEntry")
		.def_readonly("Name", &FNameEntry::Name)
		.def("AppendNameToString", &FNameEntry::AppendNameToString)
		;
	py::class_< FStruct >(m, "FStruct")
		.def("popObject", &FStruct::popObject, py::return_value_policy::reference)
		.def("popFName", &FStruct::popFName, py::return_value_policy::reference)
		.def("popFVector", &FStruct::popFVector, py::return_value_policy::reference)
		.def("popFloat", &FStruct::popFloat, py::return_value_policy::reference)
		.def("popBool", &FStruct::popBool, py::return_value_policy::reference)
		.def("popByte", &FStruct::popByte, py::return_value_policy::reference)
		.def("popInt", &FStruct::popInt, py::return_value_policy::reference)
		;
	py::class_< FOutputDevice >(m, "FOutputDevice")
		.def_readwrite("VfTable", &FOutputDevice::VfTable, py::return_value_policy::reference)
		.def_readwrite("bAllowSuppression", &FOutputDevice::bAllowSuppression, py::return_value_policy::reference)
		.def_readwrite("bSuppressEventTag", &FOutputDevice::bSuppressEventTag, py::return_value_policy::reference)
		.def_readwrite("bAutoEmitLineTerminator", &FOutputDevice::bAutoEmitLineTerminator, py::return_value_policy::reference)
		;
	py::class_< FFrame, FOutputDevice >(m, "FFrame")
		.def_readwrite("Node", &FFrame::Node, py::return_value_policy::reference)
		.def_readwrite("Object", &FFrame::Object, py::return_value_policy::reference)
		.def_readwrite("Code", &FFrame::Code, py::return_value_policy::reference)
		.def_readwrite("Locals", &FFrame::Locals, py::return_value_policy::reference)
		.def_readwrite("PreviousFrame", &FFrame::PreviousFrame, py::return_value_policy::reference)
		.def("SkipFunction", &FFrame::SkipFunction, py::return_value_policy::reference)
		;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxEditorNode(py::module &m)
{
    py::class_< UGearboxEditorNode,  UObject   >(m, "UGearboxEditorNode")
		.def_static("StaticClass", &UGearboxEditorNode::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Type", &UGearboxEditorNode::Type)
        .def_readwrite("OutputLinks", &UGearboxEditorNode::OutputLinks)
        .def_readwrite("InputLinks", &UGearboxEditorNode::InputLinks)
        .def_readwrite("VariableLinks", &UGearboxEditorNode::VariableLinks)
        .def_readwrite("SliderPosition", &UGearboxEditorNode::SliderPosition)
        .def("IsChild", &UGearboxEditorNode::IsChild)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogEvent(py::object m)
{
    py::class_< UGearboxDialogEvent,  UObject   >(m, "UGearboxDialogEvent")
        .def_readwrite("Tag", &UGearboxDialogEvent::Tag)
        .def_readwrite("NodeID", &UGearboxDialogNode::NodeID)
        .def_readwrite("Type", &UGearboxEditorNode::Type)
        .def_readwrite("OutputLinks", &UGearboxEditorNode::OutputLinks)
        .def_readwrite("InputLinks", &UGearboxEditorNode::InputLinks)
        .def_readwrite("VariableLinks", &UGearboxEditorNode::VariableLinks)
        .def_readwrite("SliderPosition", &UGearboxEditorNode::SliderPosition)
        .def("StaticClass", &UGearboxDialogEvent::StaticClass, py::return_value_policy::reference)
        .def("ActivateOutput", &UGearboxDialogNode::ActivateOutput)
        .def("IsChild", &UGearboxEditorNode::IsChild)
          ;
}
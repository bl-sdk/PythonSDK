#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxDialogEvent()
{
    class_< UGearboxDialogEvent, bases< UObject >  , boost::noncopyable>("UGearboxDialogEvent", no_init)
        .def_readwrite("Tag", &UGearboxDialogEvent::Tag)
        .def_readwrite("NodeID", &UGearboxDialogNode::NodeID)
        .def_readwrite("Type", &UGearboxEditorNode::Type)
        .def_readwrite("OutputLinks", &UGearboxEditorNode::OutputLinks)
        .def_readwrite("InputLinks", &UGearboxEditorNode::InputLinks)
        .def_readwrite("VariableLinks", &UGearboxEditorNode::VariableLinks)
        .def_readwrite("SliderPosition", &UGearboxEditorNode::SliderPosition)
        .def("StaticClass", &UGearboxDialogEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("ActivateOutput", &UGearboxDialogNode::ActivateOutput)
        .def("IsChild", &UGearboxEditorNode::IsChild)
        .staticmethod("StaticClass")
  ;
}
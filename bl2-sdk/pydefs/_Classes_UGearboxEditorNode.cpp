#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxEditorNode()
{
    class_< UGearboxEditorNode, bases< UObject >  , boost::noncopyable>("UGearboxEditorNode", no_init)
        .def_readwrite("Type", &UGearboxEditorNode::Type)
        .def_readwrite("OutputLinks", &UGearboxEditorNode::OutputLinks)
        .def_readwrite("InputLinks", &UGearboxEditorNode::InputLinks)
        .def_readwrite("VariableLinks", &UGearboxEditorNode::VariableLinks)
        .def_readwrite("SliderPosition", &UGearboxEditorNode::SliderPosition)
        .def("StaticClass", &UGearboxEditorNode::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsChild", &UGearboxEditorNode::IsChild)
        .staticmethod("StaticClass")
  ;
}
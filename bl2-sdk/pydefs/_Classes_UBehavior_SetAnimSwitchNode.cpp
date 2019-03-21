#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetAnimSwitchNode()
{
    py::class_< UBehavior_SetAnimSwitchNode,  UBehaviorBase   >("UBehavior_SetAnimSwitchNode")
        .def_readwrite("AnimNodeName", &UBehavior_SetAnimSwitchNode::AnimNodeName)
        .def_readwrite("Switch", &UBehavior_SetAnimSwitchNode::Switch)
        .def("StaticClass", &UBehavior_SetAnimSwitchNode::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetAnimSwitchNode::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
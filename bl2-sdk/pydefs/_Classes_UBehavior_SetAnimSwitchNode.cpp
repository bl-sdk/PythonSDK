#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetAnimSwitchNode()
{
    class_< UBehavior_SetAnimSwitchNode, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetAnimSwitchNode", no_init)
        .def_readwrite("AnimNodeName", &UBehavior_SetAnimSwitchNode::AnimNodeName)
        .def_readwrite("Switch", &UBehavior_SetAnimSwitchNode::Switch)
        .def("StaticClass", &UBehavior_SetAnimSwitchNode::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetAnimSwitchNode::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
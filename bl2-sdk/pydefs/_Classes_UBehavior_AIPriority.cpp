#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AIPriority()
{
    class_< UBehavior_AIPriority, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AIPriority", no_init)
        .def_readwrite("PriorityModifier", &UBehavior_AIPriority::PriorityModifier)
        .def_readwrite("Target", &UBehavior_AIPriority::Target)
        .def("StaticClass", &UBehavior_AIPriority::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AIPriority::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
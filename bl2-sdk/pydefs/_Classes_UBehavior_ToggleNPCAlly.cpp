#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ToggleNPCAlly()
{
    class_< UBehavior_ToggleNPCAlly, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ToggleNPCAlly", no_init)
        .def("StaticClass", &UBehavior_ToggleNPCAlly::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ToggleNPCAlly::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
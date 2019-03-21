#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_NetworkRoleSwitch()
{
    class_< UBehavior_NetworkRoleSwitch, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_NetworkRoleSwitch", no_init)
        .def("StaticClass", &UBehavior_NetworkRoleSwitch::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_NetworkRoleSwitch::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
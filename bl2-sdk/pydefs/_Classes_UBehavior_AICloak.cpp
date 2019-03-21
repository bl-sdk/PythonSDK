#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AICloak()
{
    class_< UBehavior_AICloak, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AICloak", no_init)
        .def_readwrite("NewCloakBehavior", &UBehavior_AICloak::NewCloakBehavior)
        .def("StaticClass", &UBehavior_AICloak::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AICloak::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
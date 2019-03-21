#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeUsability()
{
    class_< UBehavior_ChangeUsability, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeUsability", no_init)
        .def_readwrite("ChangeUsability", &UBehavior_ChangeUsability::ChangeUsability)
        .def_readwrite("UsabilityType", &UBehavior_ChangeUsability::UsabilityType)
        .def("StaticClass", &UBehavior_ChangeUsability::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeUsability::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
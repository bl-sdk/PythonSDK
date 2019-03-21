#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AISetWeaponFireRotation()
{
    class_< UBehavior_AISetWeaponFireRotation, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AISetWeaponFireRotation", no_init)
        .def("StaticClass", &UBehavior_AISetWeaponFireRotation::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_AISetWeaponFireRotation::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
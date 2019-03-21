#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponThrow()
{
    class_< UBehavior_WeaponThrow, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_WeaponThrow", no_init)
        .def("StaticClass", &UBehavior_WeaponThrow::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_WeaponThrow::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
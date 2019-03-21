#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIWeaponThrow()
{
    class_< UIWeaponThrow, bases< UInterface >  , boost::noncopyable>("UIWeaponThrow", no_init)
        .def("StaticClass", &UIWeaponThrow::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_WeaponThrow", &UIWeaponThrow::Behavior_WeaponThrow)
        .staticmethod("StaticClass")
  ;
}
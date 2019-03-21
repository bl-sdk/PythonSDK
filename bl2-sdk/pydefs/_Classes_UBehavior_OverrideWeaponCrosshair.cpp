#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_OverrideWeaponCrosshair()
{
    class_< UBehavior_OverrideWeaponCrosshair, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_OverrideWeaponCrosshair", no_init)
        .def_readwrite("CrosshairFrame", &UBehavior_OverrideWeaponCrosshair::CrosshairFrame)
        .def("StaticClass", &UBehavior_OverrideWeaponCrosshair::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_OverrideWeaponCrosshair::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ToggleMeleeWeapon()
{
    class_< UPlayerBehavior_ToggleMeleeWeapon, bases< UPlayerBehaviorBase >  , boost::noncopyable>("UPlayerBehavior_ToggleMeleeWeapon", no_init)
        .def("StaticClass", &UPlayerBehavior_ToggleMeleeWeapon::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ToggleMeleeWeapon::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
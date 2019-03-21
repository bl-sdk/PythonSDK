#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponVisibleAmmoState()
{
    class_< UBehavior_WeaponVisibleAmmoState, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_WeaponVisibleAmmoState", no_init)
        .def_readwrite("State", &UBehavior_WeaponVisibleAmmoState::State)
        .def("StaticClass", &UBehavior_WeaponVisibleAmmoState::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_WeaponVisibleAmmoState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponVisibleAmmoState()
{
    py::class_< UBehavior_WeaponVisibleAmmoState,  UBehaviorBase   >("UBehavior_WeaponVisibleAmmoState")
        .def_readwrite("State", &UBehavior_WeaponVisibleAmmoState::State)
        .def("StaticClass", &UBehavior_WeaponVisibleAmmoState::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_WeaponVisibleAmmoState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_WeaponVisibleAmmoState(py::module &m)
{
    py::class_< UBehavior_WeaponVisibleAmmoState,  UBehaviorBase   >(m, "UBehavior_WeaponVisibleAmmoState")
		.def_static("StaticClass", &UBehavior_WeaponVisibleAmmoState::StaticClass, py::return_value_policy::reference)
        .def_readwrite("State", &UBehavior_WeaponVisibleAmmoState::State)
        .def("ApplyBehaviorToContext", &UBehavior_WeaponVisibleAmmoState::ApplyBehaviorToContext)
          ;
}
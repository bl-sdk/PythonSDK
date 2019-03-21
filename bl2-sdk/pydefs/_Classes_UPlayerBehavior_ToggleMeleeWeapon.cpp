#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ToggleMeleeWeapon()
{
    py::class_< UPlayerBehavior_ToggleMeleeWeapon,  UPlayerBehaviorBase   >("UPlayerBehavior_ToggleMeleeWeapon")
        .def("StaticClass", &UPlayerBehavior_ToggleMeleeWeapon::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ToggleMeleeWeapon::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
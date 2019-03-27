#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerBehavior_ToggleMeleeWeapon(py::module &m)
{
    py::class_< UPlayerBehavior_ToggleMeleeWeapon,  UPlayerBehaviorBase   >(m, "UPlayerBehavior_ToggleMeleeWeapon")
		.def_static("StaticClass", &UPlayerBehavior_ToggleMeleeWeapon::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UPlayerBehavior_ToggleMeleeWeapon::ApplyBehaviorToContext)
          ;
}
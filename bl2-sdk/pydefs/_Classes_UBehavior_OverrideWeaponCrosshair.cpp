#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_OverrideWeaponCrosshair(py::module &m)
{
    py::class_< UBehavior_OverrideWeaponCrosshair,  UBehaviorBase   >(m, "UBehavior_OverrideWeaponCrosshair")
        .def_readwrite("CrosshairFrame", &UBehavior_OverrideWeaponCrosshair::CrosshairFrame)
        .def("StaticClass", &UBehavior_OverrideWeaponCrosshair::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_OverrideWeaponCrosshair::ApplyBehaviorToContext)
          ;
}
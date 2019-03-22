#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeWeaponVisibility(py::module &m)
{
    py::class_< UBehavior_ChangeWeaponVisibility,  UBehaviorBase   >(m, "UBehavior_ChangeWeaponVisibility")
        .def_readwrite("Status", &UBehavior_ChangeWeaponVisibility::Status)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeWeaponVisibility::ApplyBehaviorToContext)
          ;
}
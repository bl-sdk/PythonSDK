#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_WeaponAction(py::module &m)
{
    py::class_< USpecialMove_WeaponAction,  UWillowAnimDefinition   >(m, "USpecialMove_WeaponAction")
        .def("StaticClass", &USpecialMove_WeaponAction::StaticClass, py::return_value_policy::reference)
        .def("eventClientStarted", &USpecialMove_WeaponAction::eventClientStarted)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USpecialMove_WeaponAction()
{
    py::class_< USpecialMove_WeaponAction,  UWillowAnimDefinition   >("USpecialMove_WeaponAction")
        .def("StaticClass", &USpecialMove_WeaponAction::StaticClass, py::return_value_policy::reference)
        .def("eventClientStarted", &USpecialMove_WeaponAction::eventClientStarted)
        .staticmethod("StaticClass")
  ;
}
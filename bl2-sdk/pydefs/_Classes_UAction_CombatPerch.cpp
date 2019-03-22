#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAction_CombatPerch(py::module &m)
{
    py::class_< UAction_CombatPerch,  UAction_FollowPath   >(m, "UAction_CombatPerch")
        .def("StaticClass", &UAction_CombatPerch::StaticClass, py::return_value_policy::reference)
        .def("eventPathFind", &UAction_CombatPerch::eventPathFind)
        .def("eventStop", &UAction_CombatPerch::eventStop)
        .def("eventStart", &UAction_CombatPerch::eventStart)
        .def("eventCanRun", &UAction_CombatPerch::eventCanRun)
          ;
}
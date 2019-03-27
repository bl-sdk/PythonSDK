#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIPopulationSpawnPoint(py::module &m)
{
    py::class_< UIPopulationSpawnPoint,  UInterface   >(m, "UIPopulationSpawnPoint")
		.def_static("StaticClass", &UIPopulationSpawnPoint::StaticClass, py::return_value_policy::reference)
        .def("GetInitialMovementHoldTime", &UIPopulationSpawnPoint::GetInitialMovementHoldTime)
        .def("GetInitialDestination", &UIPopulationSpawnPoint::GetInitialDestination, py::return_value_policy::reference)
        .def("GetInitialActionType", &UIPopulationSpawnPoint::GetInitialActionType)
        .def("GetSpawnStyleType", &UIPopulationSpawnPoint::GetSpawnStyleType)
          ;
}
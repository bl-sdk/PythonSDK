#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStationTeleporterVehicleExitPoint()
{
    py::class_< AStationTeleporterVehicleExitPoint,  AStationTeleporterExitPoint   >("AStationTeleporterVehicleExitPoint")
        .def("StaticClass", &AStationTeleporterVehicleExitPoint::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
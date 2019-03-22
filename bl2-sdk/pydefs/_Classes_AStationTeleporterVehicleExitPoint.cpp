#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStationTeleporterVehicleExitPoint(py::module &m)
{
    py::class_< AStationTeleporterVehicleExitPoint,  AStationTeleporterExitPoint   >(m, "AStationTeleporterVehicleExitPoint")
        .def("StaticClass", &AStationTeleporterVehicleExitPoint::StaticClass, py::return_value_policy::reference)
          ;
}
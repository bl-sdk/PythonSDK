#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStationTeleporterDestination(py::module &m)
{
    py::class_< AStationTeleporterDestination,  ATeleporterDestination   >(m, "AStationTeleporterDestination")
		.def_static("StaticClass", &AStationTeleporterDestination::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ExitPointRadius", &AStationTeleporterDestination::ExitPointRadius)
        .def_readwrite("ExitPointHeight", &AStationTeleporterDestination::ExitPointHeight)
        .def("UpdateExitPointHeights", &AStationTeleporterDestination::UpdateExitPointHeights)
        .def("UpdateExitPointLocations", &AStationTeleporterDestination::UpdateExitPointLocations)
        .def("eventDestroyed", &AStationTeleporterDestination::eventDestroyed)
          ;
}
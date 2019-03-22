#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStationTeleporterExitPoint(py::module &m)
{
    py::class_< AStationTeleporterExitPoint,  AKeypoint   >(m, "AStationTeleporterExitPoint")
        .def("StaticClass", &AStationTeleporterExitPoint::StaticClass, py::return_value_policy::reference)
          ;
}
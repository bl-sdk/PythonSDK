#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AStationTeleporterExitPoint()
{
    py::class_< AStationTeleporterExitPoint,  AKeypoint   >("AStationTeleporterExitPoint")
        .def("StaticClass", &AStationTeleporterExitPoint::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
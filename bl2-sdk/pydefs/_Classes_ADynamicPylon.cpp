#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicPylon()
{
    py::class_< ADynamicPylon,  APylon   >("ADynamicPylon")
        .def("StaticClass", &ADynamicPylon::StaticClass, py::return_value_policy::reference)
        .def("eventStoppedMoving", &ADynamicPylon::eventStoppedMoving)
        .def("eventStartedMoving", &ADynamicPylon::eventStartedMoving)
        .def("FlushDynamicEdges", &ADynamicPylon::FlushDynamicEdges)
        .def("RebuildDynamicEdges", &ADynamicPylon::RebuildDynamicEdges)
        .def("PostBeginPlay", &ADynamicPylon::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}
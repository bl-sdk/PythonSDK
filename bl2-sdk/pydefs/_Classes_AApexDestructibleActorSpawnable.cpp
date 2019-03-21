#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AApexDestructibleActorSpawnable()
{
    py::class_< AApexDestructibleActorSpawnable,  AApexDestructibleActor   >("AApexDestructibleActorSpawnable")
        .def("StaticClass", &AApexDestructibleActorSpawnable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
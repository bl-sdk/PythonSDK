#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AApexDestructibleActorSpawnable(py::object m)
{
    py::class_< AApexDestructibleActorSpawnable,  AApexDestructibleActor   >(m, "AApexDestructibleActorSpawnable")
        .def("StaticClass", &AApexDestructibleActorSpawnable::StaticClass, py::return_value_policy::reference)
          ;
}
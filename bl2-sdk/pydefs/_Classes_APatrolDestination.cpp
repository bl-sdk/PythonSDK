#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APatrolDestination()
{
    py::class_< APatrolDestination,  AActor   >("APatrolDestination")
        .def_readwrite("NextPatrolPoints", &APatrolDestination::NextPatrolPoints)
        .def("StaticClass", &APatrolDestination::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
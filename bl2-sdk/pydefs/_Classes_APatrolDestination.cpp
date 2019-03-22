#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APatrolDestination(py::module &m)
{
    py::class_< APatrolDestination,  AActor   >(m, "APatrolDestination")
        .def_readwrite("NextPatrolPoints", &APatrolDestination::NextPatrolPoints)
        .def("StaticClass", &APatrolDestination::StaticClass, py::return_value_policy::reference)
          ;
}
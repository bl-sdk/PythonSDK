#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APatrolDestination(py::module &m)
{
    py::class_< APatrolDestination,  AActor   >(m, "APatrolDestination")
		.def_static("StaticClass", &APatrolDestination::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NextPatrolPoints", &APatrolDestination::NextPatrolPoints)
          ;
}
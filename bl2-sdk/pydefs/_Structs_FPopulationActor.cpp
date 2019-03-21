#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationActor(py::object m)
{
    py::class_< FPopulationActor >(m, "FPopulationActor")
        .def_readwrite("SpawnFactory", &FPopulationActor::SpawnFactory)
        .def_readwrite("Probability", &FPopulationActor::Probability)
        .def_readwrite("MaxActiveAtOneTime", &FPopulationActor::MaxActiveAtOneTime)
  ;
}
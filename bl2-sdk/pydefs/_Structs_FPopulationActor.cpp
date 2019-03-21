#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationActor()
{
    py::class_< FPopulationActor >("FPopulationActor")
        .def_readwrite("SpawnFactory", &FPopulationActor::SpawnFactory)
        .def_readwrite("Probability", &FPopulationActor::Probability)
        .def_readwrite("MaxActiveAtOneTime", &FPopulationActor::MaxActiveAtOneTime)
  ;
}
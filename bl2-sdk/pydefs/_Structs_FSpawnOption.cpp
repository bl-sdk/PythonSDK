#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpawnOption()
{
    py::class_< FSpawnOption >("FSpawnOption")
        .def_readwrite("Factory", &FSpawnOption::Factory)
        .def_readwrite("ComputedProbability", &FSpawnOption::ComputedProbability)
  ;
}
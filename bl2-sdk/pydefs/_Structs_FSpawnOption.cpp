#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpawnOption(py::object m)
{
    py::class_< FSpawnOption >(m, "FSpawnOption")
        .def_readwrite("Factory", &FSpawnOption::Factory)
        .def_readwrite("ComputedProbability", &FSpawnOption::ComputedProbability)
  ;
}
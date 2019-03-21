#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoordinatedEffectIndices()
{
    py::class_< FCoordinatedEffectIndices >("FCoordinatedEffectIndices")
        .def_readwrite("StartingIndex", &FCoordinatedEffectIndices::StartingIndex)
        .def_readwrite("EndingIndex", &FCoordinatedEffectIndices::EndingIndex)
  ;
}
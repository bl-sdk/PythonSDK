#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoordinatedEffectIndices(py::module &m)
{
    py::class_< FCoordinatedEffectIndices >(m, "FCoordinatedEffectIndices")
        .def_readwrite("StartingIndex", &FCoordinatedEffectIndices::StartingIndex)
        .def_readwrite("EndingIndex", &FCoordinatedEffectIndices::EndingIndex)
  ;
}
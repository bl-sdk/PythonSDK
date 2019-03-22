#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBonePair(py::module &m)
{
    py::class_< FBonePair >(m, "FBonePair")
  ;
}
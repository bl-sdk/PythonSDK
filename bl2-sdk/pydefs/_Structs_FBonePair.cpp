#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBonePair(py::object m)
{
    py::class_< FBonePair >(m, "FBonePair")
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAlphaMap(py::module &m)
{
    py::class_< FAlphaMap >(m, "FAlphaMap")
  ;
}
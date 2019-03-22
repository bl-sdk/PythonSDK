#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLocalTalker(py::module &m)
{
    py::class_< FLocalTalker >(m, "FLocalTalker")
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLocalTalker(py::object m)
{
    py::class_< FLocalTalker >(m, "FLocalTalker")
  ;
}
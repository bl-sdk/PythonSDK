#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLocalTalker()
{
    py::class_< FLocalTalker >("FLocalTalker")
  ;
}
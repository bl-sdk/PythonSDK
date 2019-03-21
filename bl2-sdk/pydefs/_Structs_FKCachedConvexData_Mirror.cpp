#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKCachedConvexData_Mirror()
{
    py::class_< FKCachedConvexData_Mirror >("FKCachedConvexData_Mirror")
        .def_readwrite("CachedConvexElements", &FKCachedConvexData_Mirror::CachedConvexElements)
  ;
}
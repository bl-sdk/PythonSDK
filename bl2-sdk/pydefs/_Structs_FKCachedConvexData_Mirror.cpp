#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKCachedConvexData_Mirror(py::module &m)
{
    py::class_< FKCachedConvexData_Mirror >(m, "FKCachedConvexData_Mirror")
        .def_readwrite("CachedConvexElements", &FKCachedConvexData_Mirror::CachedConvexElements)
  ;
}
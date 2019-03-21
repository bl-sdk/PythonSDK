#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKCachedConvexData()
{
    py::class_< FKCachedConvexData >("FKCachedConvexData")
        .def_readwrite("CachedConvexElements", &FKCachedConvexData::CachedConvexElements)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKCachedConvexDataElement()
{
    py::class_< FKCachedConvexDataElement >("FKCachedConvexDataElement")
        .def_readwrite("ConvexElementData", &FKCachedConvexDataElement::ConvexElementData)
  ;
}
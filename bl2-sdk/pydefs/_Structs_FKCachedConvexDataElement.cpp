#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKCachedConvexDataElement(py::module &m)
{
    py::class_< FKCachedConvexDataElement >(m, "FKCachedConvexDataElement")
        .def_readwrite("ConvexElementData", &FKCachedConvexDataElement::ConvexElementData)
  ;
}
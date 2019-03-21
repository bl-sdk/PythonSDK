#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBoxSphereBounds(py::object m)
{
    py::class_< FBoxSphereBounds >(m, "FBoxSphereBounds")
        .def_readwrite("Origin", &FBoxSphereBounds::Origin)
        .def_readwrite("BoxExtent", &FBoxSphereBounds::BoxExtent)
        .def_readwrite("SphereRadius", &FBoxSphereBounds::SphereRadius)
  ;
}
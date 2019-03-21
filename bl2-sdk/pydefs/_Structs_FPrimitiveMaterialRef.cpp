#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPrimitiveMaterialRef(py::object m)
{
    py::class_< FPrimitiveMaterialRef >(m, "FPrimitiveMaterialRef")
        .def_readwrite("Primitive", &FPrimitiveMaterialRef::Primitive)
        .def_readwrite("MaterialIndex", &FPrimitiveMaterialRef::MaterialIndex)
  ;
}
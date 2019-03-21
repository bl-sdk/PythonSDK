#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPolyReference(py::object m)
{
    py::class_< FPolyReference >(m, "FPolyReference")
        .def_readwrite("OwningPylon", &FPolyReference::OwningPylon)
        .def_readwrite("PolyId", &FPolyReference::PolyId)
        .def_readwrite("CachedPoly", &FPolyReference::CachedPoly)
  ;
}
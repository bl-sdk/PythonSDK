#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPolyReference()
{
    py::class_< FPolyReference >("FPolyReference")
        .def_readwrite("OwningPylon", &FPolyReference::OwningPylon)
        .def_readwrite("PolyId", &FPolyReference::PolyId)
        .def_readwrite("CachedPoly", &FPolyReference::CachedPoly)
  ;
}
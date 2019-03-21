#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLightMapRef()
{
    py::class_< FLightMapRef >("FLightMapRef")
        .def_readwrite("Reference", &FLightMapRef::Reference)
  ;
}
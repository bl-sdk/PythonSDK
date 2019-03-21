#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObjectReference()
{
    py::class_< FObjectReference >("FObjectReference")
        .def_readwrite("Obj", &FObjectReference::Obj)
  ;
}
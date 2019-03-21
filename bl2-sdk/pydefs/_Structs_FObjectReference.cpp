#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FObjectReference(py::object m)
{
    py::class_< FObjectReference >(m, "FObjectReference")
        .def_readwrite("Obj", &FObjectReference::Obj)
  ;
}
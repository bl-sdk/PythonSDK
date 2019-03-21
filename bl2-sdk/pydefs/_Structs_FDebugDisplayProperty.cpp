#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDebugDisplayProperty(py::object m)
{
    py::class_< FDebugDisplayProperty >(m, "FDebugDisplayProperty")
        .def_readwrite("Obj", &FDebugDisplayProperty::Obj)
        .def_readwrite("PropertyName", &FDebugDisplayProperty::PropertyName)
  ;
}
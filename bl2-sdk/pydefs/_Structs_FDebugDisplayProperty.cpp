#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDebugDisplayProperty()
{
    py::class_< FDebugDisplayProperty >("FDebugDisplayProperty")
        .def_readwrite("Obj", &FDebugDisplayProperty::Obj)
        .def_readwrite("PropertyName", &FDebugDisplayProperty::PropertyName)
  ;
}
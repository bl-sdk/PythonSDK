#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSwitchObjectCase()
{
    py::class_< FSwitchObjectCase >("FSwitchObjectCase")
        .def_readwrite("ObjectValue", &FSwitchObjectCase::ObjectValue)
  ;
}
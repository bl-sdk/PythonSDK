#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSwitchObjectCase(py::module &m)
{
    py::class_< FSwitchObjectCase >(m, "FSwitchObjectCase")
        .def_readwrite("ObjectValue", &FSwitchObjectCase::ObjectValue)
  ;
}
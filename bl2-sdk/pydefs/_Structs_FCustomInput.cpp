#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCustomInput()
{
    py::class_< FCustomInput >("FCustomInput")
        .def_readwrite("InputName", &FCustomInput::InputName)
        .def_readwrite("Input", &FCustomInput::Input)
  ;
}
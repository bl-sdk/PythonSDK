#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAutoCompleteCommand(py::module &m)
{
    py::class_< FAutoCompleteCommand >(m, "FAutoCompleteCommand")
        .def_readwrite("Command", &FAutoCompleteCommand::Command)
        .def_readwrite("Desc", &FAutoCompleteCommand::Desc)
  ;
}
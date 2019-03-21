#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputContextData()
{
    py::class_< FInputContextData >("FInputContextData")
        .def_readwrite("ContextName", &FInputContextData::ContextName)
        .def_readwrite("Definition", &FInputContextData::Definition)
  ;
}
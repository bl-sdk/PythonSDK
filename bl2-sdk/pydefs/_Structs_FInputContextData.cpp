#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputContextData(py::module &m)
{
    py::class_< FInputContextData >(m, "FInputContextData")
        .def_readwrite("ContextName", &FInputContextData::ContextName)
        .def_readwrite("Definition", &FInputContextData::Definition)
  ;
}
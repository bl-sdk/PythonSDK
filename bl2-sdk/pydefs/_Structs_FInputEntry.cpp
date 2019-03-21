#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputEntry(py::object m)
{
    py::class_< FInputEntry >(m, "FInputEntry")
        .def_readwrite("Type", &FInputEntry::Type)
        .def_readwrite("Value", &FInputEntry::Value)
        .def_readwrite("TimeDelta", &FInputEntry::TimeDelta)
        .def_readwrite("Action", &FInputEntry::Action)
  ;
}
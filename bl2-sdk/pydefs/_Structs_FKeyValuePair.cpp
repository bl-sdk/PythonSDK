#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKeyValuePair()
{
    py::class_< FKeyValuePair >("FKeyValuePair")
        .def_readwrite("Key", &FKeyValuePair::Key)
        .def_readwrite("Value", &FKeyValuePair::Value)
  ;
}
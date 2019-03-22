#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FKeyValuePair(py::module &m)
{
    py::class_< FKeyValuePair >(m, "FKeyValuePair")
        .def_readwrite("Key", &FKeyValuePair::Key)
        .def_readwrite("Value", &FKeyValuePair::Value)
  ;
}
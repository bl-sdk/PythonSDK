#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FServiceParameterResult(py::object m)
{
    py::class_< FServiceParameterResult >(m, "FServiceParameterResult")
        .def_readwrite("Key", &FServiceParameterResult::Key)
        .def_readwrite("Value", &FServiceParameterResult::Value)
  ;
}
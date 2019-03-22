#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFloatParameter(py::module &m)
{
    py::class_< FFloatParameter >(m, "FFloatParameter")
        .def_readwrite("Name", &FFloatParameter::Name)
        .def_readwrite("Value", &FFloatParameter::Value)
  ;
}
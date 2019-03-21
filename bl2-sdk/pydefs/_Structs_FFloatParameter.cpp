#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFloatParameter()
{
    py::class_< FFloatParameter >("FFloatParameter")
        .def_readwrite("Name", &FFloatParameter::Name)
        .def_readwrite("Value", &FFloatParameter::Value)
  ;
}
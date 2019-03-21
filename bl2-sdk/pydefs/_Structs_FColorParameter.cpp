#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FColorParameter()
{
    py::class_< FColorParameter >("FColorParameter")
        .def_readwrite("Name", &FColorParameter::Name)
        .def_readwrite("Value", &FColorParameter::Value)
  ;
}
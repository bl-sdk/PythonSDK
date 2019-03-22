#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FColorParameter(py::module &m)
{
    py::class_< FColorParameter >(m, "FColorParameter")
        .def_readwrite("Name", &FColorParameter::Name)
        .def_readwrite("Value", &FColorParameter::Value)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVectorParameter()
{
    py::class_< FVectorParameter >("FVectorParameter")
        .def_readwrite("Name", &FVectorParameter::Name)
        .def_readwrite("Value", &FVectorParameter::Value)
  ;
}
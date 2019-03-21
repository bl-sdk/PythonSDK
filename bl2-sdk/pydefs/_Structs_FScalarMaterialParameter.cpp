#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScalarMaterialParameter()
{
    py::class_< FScalarMaterialParameter >("FScalarMaterialParameter")
        .def_readwrite("Name", &FScalarMaterialParameter::Name)
        .def_readwrite("Value", &FScalarMaterialParameter::Value)
        .def_readwrite("ValueFromAttribute", &FScalarMaterialParameter::ValueFromAttribute)
  ;
}
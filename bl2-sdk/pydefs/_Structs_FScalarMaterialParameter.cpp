#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScalarMaterialParameter(py::module &m)
{
    py::class_< FScalarMaterialParameter >(m, "FScalarMaterialParameter")
        .def_readwrite("Name", &FScalarMaterialParameter::Name)
        .def_readwrite("Value", &FScalarMaterialParameter::Value)
        .def_readwrite("ValueFromAttribute", &FScalarMaterialParameter::ValueFromAttribute)
  ;
}
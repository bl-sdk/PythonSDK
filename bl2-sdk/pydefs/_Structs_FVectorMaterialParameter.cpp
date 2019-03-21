#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVectorMaterialParameter(py::object m)
{
    py::class_< FVectorMaterialParameter >(m, "FVectorMaterialParameter")
        .def_readwrite("Name", &FVectorMaterialParameter::Name)
        .def_readwrite("Value", &FVectorMaterialParameter::Value)
        .def_readwrite("VectorScale", &FVectorMaterialParameter::VectorScale)
  ;
}
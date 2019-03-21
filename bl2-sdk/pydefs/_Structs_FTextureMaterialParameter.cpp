#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTextureMaterialParameter(py::object m)
{
    py::class_< FTextureMaterialParameter >(m, "FTextureMaterialParameter")
        .def_readwrite("Name", &FTextureMaterialParameter::Name)
        .def_readwrite("Value", &FTextureMaterialParameter::Value)
  ;
}
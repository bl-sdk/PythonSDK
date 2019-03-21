#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FScalarMaterialInput()
{
    py::class_< FScalarMaterialInput,  FMaterialInput   >("FScalarMaterialInput")
        .def_readwrite("Constant", &FScalarMaterialInput::Constant)
  ;
}
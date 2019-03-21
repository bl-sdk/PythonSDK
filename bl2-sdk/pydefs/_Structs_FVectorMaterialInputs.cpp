#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVectorMaterialInput()
{
    py::class_< FVectorMaterialInput,  FMaterialInput   >("FVectorMaterialInput")
        .def_readwrite("Constant", &FVectorMaterialInput::Constant)
  ;
}
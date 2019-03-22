#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVectorMaterialInput(py::module &m)
{
    py::class_< FVectorMaterialInput,  FMaterialInput   >(m, "FVectorMaterialInput")
        .def_readwrite("Constant", &FVectorMaterialInput::Constant)
  ;
}
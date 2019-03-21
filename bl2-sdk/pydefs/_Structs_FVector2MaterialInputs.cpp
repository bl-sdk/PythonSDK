#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVector2MaterialInput(py::object m)
{
    py::class_< FVector2MaterialInput,  FMaterialInput   >(m, "FVector2MaterialInput")
        .def_readwrite("ConstantX", &FVector2MaterialInput::ConstantX)
        .def_readwrite("ConstantY", &FVector2MaterialInput::ConstantY)
  ;
}
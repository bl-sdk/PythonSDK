#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMaterialInput()
{
    py::class_< FMaterialInput >("FMaterialInput")
        .def_readwrite("Expression", &FMaterialInput::Expression)
        .def_readwrite("Mask", &FMaterialInput::Mask)
        .def_readwrite("MaskR", &FMaterialInput::MaskR)
        .def_readwrite("MaskG", &FMaterialInput::MaskG)
        .def_readwrite("MaskB", &FMaterialInput::MaskB)
        .def_readwrite("MaskA", &FMaterialInput::MaskA)
        .def_readwrite("GCC64_Padding", &FMaterialInput::GCC64_Padding)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FExpressionInput(py::module &m)
{
    py::class_< FExpressionInput >(m, "FExpressionInput")
        .def_readwrite("Expression", &FExpressionInput::Expression)
        .def_readwrite("Mask", &FExpressionInput::Mask)
        .def_readwrite("MaskR", &FExpressionInput::MaskR)
        .def_readwrite("MaskG", &FExpressionInput::MaskG)
        .def_readwrite("MaskB", &FExpressionInput::MaskB)
        .def_readwrite("MaskA", &FExpressionInput::MaskA)
        .def_readwrite("GCC64_Padding", &FExpressionInput::GCC64_Padding)
  ;
}
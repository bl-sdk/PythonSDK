#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstantBiasScale(py::module &m)
{
    py::class_< UMaterialExpressionConstantBiasScale,  UMaterialExpression   >(m, "UMaterialExpressionConstantBiasScale")
        .def_readwrite("Input", &UMaterialExpressionConstantBiasScale::Input)
        .def_readwrite("Bias", &UMaterialExpressionConstantBiasScale::Bias)
        .def_readwrite("Scale", &UMaterialExpressionConstantBiasScale::Scale)
          ;
}
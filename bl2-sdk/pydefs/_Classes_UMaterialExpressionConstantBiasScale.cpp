#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionConstantBiasScale(py::module &m)
{
    py::class_< UMaterialExpressionConstantBiasScale,  UMaterialExpression   >(m, "UMaterialExpressionConstantBiasScale")
		.def_static("StaticClass", &UMaterialExpressionConstantBiasScale::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Input", &UMaterialExpressionConstantBiasScale::Input)
        .def_readwrite("Bias", &UMaterialExpressionConstantBiasScale::Bias)
        .def_readwrite("Scale", &UMaterialExpressionConstantBiasScale::Scale)
          ;
}
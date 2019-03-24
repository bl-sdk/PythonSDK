#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDepthBiasedBlend(py::module &m)
{
    py::class_< UMaterialExpressionDepthBiasedBlend,  UMaterialExpression   >(m, "UMaterialExpressionDepthBiasedBlend")
		.def_static("StaticClass", &UMaterialExpressionDepthBiasedBlend::StaticClass, py::return_value_policy::reference)
        .def_readwrite("BiasScale", &UMaterialExpressionDepthBiasedBlend::BiasScale)
        .def_readwrite("RGB", &UMaterialExpressionDepthBiasedBlend::RGB)
        .def_readwrite("Alpha", &UMaterialExpressionDepthBiasedBlend::Alpha)
        .def_readwrite("Bias", &UMaterialExpressionDepthBiasedBlend::Bias)
          ;
}
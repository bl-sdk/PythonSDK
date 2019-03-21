#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDepthBiasedAlpha()
{
    py::class_< UMaterialExpressionDepthBiasedAlpha,  UMaterialExpression   >("UMaterialExpressionDepthBiasedAlpha")
        .def_readwrite("BiasScale", &UMaterialExpressionDepthBiasedAlpha::BiasScale)
        .def_readwrite("Alpha", &UMaterialExpressionDepthBiasedAlpha::Alpha)
        .def_readwrite("Bias", &UMaterialExpressionDepthBiasedAlpha::Bias)
        .def("StaticClass", &UMaterialExpressionDepthBiasedAlpha::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDepthBiasBlend(py::object m)
{
    py::class_< UMaterialExpressionDepthBiasBlend,  UMaterialExpressionTextureSample   >(m, "UMaterialExpressionDepthBiasBlend")
        .def_readwrite("BiasScale", &UMaterialExpressionDepthBiasBlend::BiasScale)
        .def_readwrite("Bias", &UMaterialExpressionDepthBiasBlend::Bias)
        .def("StaticClass", &UMaterialExpressionDepthBiasBlend::StaticClass, py::return_value_policy::reference)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionDepthBiasBlend(py::module &m)
{
    py::class_< UMaterialExpressionDepthBiasBlend,  UMaterialExpressionTextureSample   >(m, "UMaterialExpressionDepthBiasBlend")
        .def_readwrite("BiasScale", &UMaterialExpressionDepthBiasBlend::BiasScale)
        .def_readwrite("Bias", &UMaterialExpressionDepthBiasBlend::Bias)
          ;
}
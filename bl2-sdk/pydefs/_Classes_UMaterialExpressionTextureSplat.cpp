#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTextureSplat(py::module &m)
{
    py::class_< UMaterialExpressionTextureSplat,  UMaterialExpression   >(m, "UMaterialExpressionTextureSplat")
        .def_readwrite("BackdropTexture", &UMaterialExpressionTextureSplat::BackdropTexture)
        .def_readwrite("OverlayTexture", &UMaterialExpressionTextureSplat::OverlayTexture)
        .def_readwrite("UVs", &UMaterialExpressionTextureSplat::UVs)
        .def_readwrite("Offset", &UMaterialExpressionTextureSplat::Offset)
        .def_readwrite("Scale", &UMaterialExpressionTextureSplat::Scale)
          ;
}
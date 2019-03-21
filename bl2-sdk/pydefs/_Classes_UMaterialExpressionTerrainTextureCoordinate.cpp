#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTerrainTextureCoordinate()
{
    py::class_< UMaterialExpressionTerrainTextureCoordinate,  UMaterialExpression   >("UMaterialExpressionTerrainTextureCoordinate")
        .def_readwrite("LayerIndex", &UMaterialExpressionTerrainTextureCoordinate::LayerIndex)
        .def_readwrite("LayerProjection", &UMaterialExpressionTerrainTextureCoordinate::LayerProjection)
        .def("StaticClass", &UMaterialExpressionTerrainTextureCoordinate::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
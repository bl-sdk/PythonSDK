#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTerrainTextureCoordinate(py::module &m)
{
    py::class_< UMaterialExpressionTerrainTextureCoordinate,  UMaterialExpression   >(m, "UMaterialExpressionTerrainTextureCoordinate")
		.def_static("StaticClass", &UMaterialExpressionTerrainTextureCoordinate::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LayerIndex", &UMaterialExpressionTerrainTextureCoordinate::LayerIndex)
        .def_readwrite("LayerProjection", &UMaterialExpressionTerrainTextureCoordinate::LayerProjection)
          ;
}
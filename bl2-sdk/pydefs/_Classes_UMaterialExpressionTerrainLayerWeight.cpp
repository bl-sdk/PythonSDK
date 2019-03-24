#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTerrainLayerWeight(py::module &m)
{
    py::class_< UMaterialExpressionTerrainLayerWeight,  UMaterialExpression   >(m, "UMaterialExpressionTerrainLayerWeight")
		.def_static("StaticClass", &UMaterialExpressionTerrainLayerWeight::StaticClass, py::return_value_policy::reference)
        .def_readwrite("InstanceOverride", &UMaterialExpressionTerrainLayerWeight::InstanceOverride)
        .def_readwrite("Base", &UMaterialExpressionTerrainLayerWeight::Base)
        .def_readwrite("Layer", &UMaterialExpressionTerrainLayerWeight::Layer)
        .def_readwrite("ParameterName", &UMaterialExpressionTerrainLayerWeight::ParameterName)
        .def_readwrite("PreviewWeight", &UMaterialExpressionTerrainLayerWeight::PreviewWeight)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionTerrainLayerWeight::ExpressionGUID)
          ;
}
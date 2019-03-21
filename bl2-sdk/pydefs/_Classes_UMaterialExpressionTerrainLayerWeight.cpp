#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTerrainLayerWeight()
{
    py::class_< UMaterialExpressionTerrainLayerWeight,  UMaterialExpression   >("UMaterialExpressionTerrainLayerWeight")
        .def_readwrite("InstanceOverride", &UMaterialExpressionTerrainLayerWeight::InstanceOverride)
        .def_readwrite("Base", &UMaterialExpressionTerrainLayerWeight::Base)
        .def_readwrite("Layer", &UMaterialExpressionTerrainLayerWeight::Layer)
        .def_readwrite("ParameterName", &UMaterialExpressionTerrainLayerWeight::ParameterName)
        .def_readwrite("PreviewWeight", &UMaterialExpressionTerrainLayerWeight::PreviewWeight)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionTerrainLayerWeight::ExpressionGUID)
        .def("StaticClass", &UMaterialExpressionTerrainLayerWeight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
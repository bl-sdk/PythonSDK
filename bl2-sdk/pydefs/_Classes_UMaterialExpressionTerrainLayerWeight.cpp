#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTerrainLayerWeight()
{
    class_< UMaterialExpressionTerrainLayerWeight, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionTerrainLayerWeight", no_init)
        .def_readwrite("InstanceOverride", &UMaterialExpressionTerrainLayerWeight::InstanceOverride)
        .def_readwrite("Base", &UMaterialExpressionTerrainLayerWeight::Base)
        .def_readwrite("Layer", &UMaterialExpressionTerrainLayerWeight::Layer)
        .def_readwrite("ParameterName", &UMaterialExpressionTerrainLayerWeight::ParameterName)
        .def_readwrite("PreviewWeight", &UMaterialExpressionTerrainLayerWeight::PreviewWeight)
        .def_readwrite("ExpressionGUID", &UMaterialExpressionTerrainLayerWeight::ExpressionGUID)
        .def("StaticClass", &UMaterialExpressionTerrainLayerWeight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
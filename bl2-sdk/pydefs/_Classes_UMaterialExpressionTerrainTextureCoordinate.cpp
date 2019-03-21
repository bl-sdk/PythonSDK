#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTerrainTextureCoordinate()
{
    class_< UMaterialExpressionTerrainTextureCoordinate, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionTerrainTextureCoordinate", no_init)
        .def_readwrite("LayerIndex", &UMaterialExpressionTerrainTextureCoordinate::LayerIndex)
        .def_readwrite("LayerProjection", &UMaterialExpressionTerrainTextureCoordinate::LayerProjection)
        .def("StaticClass", &UMaterialExpressionTerrainTextureCoordinate::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
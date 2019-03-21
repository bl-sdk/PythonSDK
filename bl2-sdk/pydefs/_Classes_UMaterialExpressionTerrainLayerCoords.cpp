#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTerrainLayerCoords()
{
    class_< UMaterialExpressionTerrainLayerCoords, bases< UMaterialExpression >  , boost::noncopyable>("UMaterialExpressionTerrainLayerCoords", no_init)
        .def_readwrite("MappingType", &UMaterialExpressionTerrainLayerCoords::MappingType)
        .def_readwrite("MappingScale", &UMaterialExpressionTerrainLayerCoords::MappingScale)
        .def_readwrite("MappingRotation", &UMaterialExpressionTerrainLayerCoords::MappingRotation)
        .def_readwrite("MappingPanU", &UMaterialExpressionTerrainLayerCoords::MappingPanU)
        .def_readwrite("MappingPanV", &UMaterialExpressionTerrainLayerCoords::MappingPanV)
        .def("StaticClass", &UMaterialExpressionTerrainLayerCoords::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
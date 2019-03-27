#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMaterialExpressionTerrainLayerCoords(py::module &m)
{
    py::class_< UMaterialExpressionTerrainLayerCoords,  UMaterialExpression   >(m, "UMaterialExpressionTerrainLayerCoords")
		.def_static("StaticClass", &UMaterialExpressionTerrainLayerCoords::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MappingType", &UMaterialExpressionTerrainLayerCoords::MappingType)
        .def_readwrite("MappingScale", &UMaterialExpressionTerrainLayerCoords::MappingScale)
        .def_readwrite("MappingRotation", &UMaterialExpressionTerrainLayerCoords::MappingRotation)
        .def_readwrite("MappingPanU", &UMaterialExpressionTerrainLayerCoords::MappingPanU)
        .def_readwrite("MappingPanV", &UMaterialExpressionTerrainLayerCoords::MappingPanV)
          ;
}
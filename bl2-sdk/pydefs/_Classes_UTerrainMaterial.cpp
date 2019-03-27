#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTerrainMaterial(py::module &m)
{
    py::class_< UTerrainMaterial,  UObject   >(m, "UTerrainMaterial")
		.def_static("StaticClass", &UTerrainMaterial::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LocalToMapping", &UTerrainMaterial::LocalToMapping)
        .def_readwrite("MappingType", &UTerrainMaterial::MappingType)
        .def_readwrite("MappingScale", &UTerrainMaterial::MappingScale)
        .def_readwrite("MappingRotation", &UTerrainMaterial::MappingRotation)
        .def_readwrite("MappingPanU", &UTerrainMaterial::MappingPanU)
        .def_readwrite("MappingPanV", &UTerrainMaterial::MappingPanV)
        .def_readwrite("Material", &UTerrainMaterial::Material)
        .def_readwrite("DisplacementMap", &UTerrainMaterial::DisplacementMap)
        .def_readwrite("DisplacementScale", &UTerrainMaterial::DisplacementScale)
        .def_readwrite("FoliageMeshes", &UTerrainMaterial::FoliageMeshes)
          ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTerrainMaterial()
{
    class_< UTerrainMaterial, bases< UObject >  , boost::noncopyable>("UTerrainMaterial", no_init)
        .def_readonly("UnknownData00", &UTerrainMaterial::UnknownData00)
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
        .def("StaticClass", &UTerrainMaterial::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
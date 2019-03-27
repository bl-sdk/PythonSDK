#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTerrainComponent(py::module &m)
{
    py::class_< UTerrainComponent,  UPrimitiveComponent   >(m, "UTerrainComponent")
		.def_static("StaticClass", &UTerrainComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ShadowMaps", &UTerrainComponent::ShadowMaps)
        .def_readwrite("IrrelevantLights", &UTerrainComponent::IrrelevantLights)
        .def_readwrite("TerrainObject", &UTerrainComponent::TerrainObject)
        .def_readwrite("TerrainRenderResources", &UTerrainComponent::TerrainRenderResources)
        .def_readwrite("SectionBaseX", &UTerrainComponent::SectionBaseX)
        .def_readwrite("SectionBaseY", &UTerrainComponent::SectionBaseY)
        .def_readwrite("SectionSizeX", &UTerrainComponent::SectionSizeX)
        .def_readwrite("SectionSizeY", &UTerrainComponent::SectionSizeY)
        .def_readwrite("TrueSectionSizeX", &UTerrainComponent::TrueSectionSizeX)
        .def_readwrite("TrueSectionSizeY", &UTerrainComponent::TrueSectionSizeY)
        .def_readwrite("LightMap", &UTerrainComponent::LightMap)
        .def_readwrite("BatchMaterials", &UTerrainComponent::BatchMaterials)
        .def_readwrite("FullBatch", &UTerrainComponent::FullBatch)
        .def_readwrite("GameBVTree", &UTerrainComponent::GameBVTree)
        .def_readwrite("EditorBVTree", &UTerrainComponent::EditorBVTree)
        .def_readwrite("RBHeightfield", &UTerrainComponent::RBHeightfield)
          ;
}
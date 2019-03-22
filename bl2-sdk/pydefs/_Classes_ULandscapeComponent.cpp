#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULandscapeComponent(py::module &m)
{
    py::class_< ULandscapeComponent,  UPrimitiveComponent   >(m, "ULandscapeComponent")
        .def_readwrite("SectionBaseX", &ULandscapeComponent::SectionBaseX)
        .def_readwrite("SectionBaseY", &ULandscapeComponent::SectionBaseY)
        .def_readwrite("ComponentSizeQuads", &ULandscapeComponent::ComponentSizeQuads)
        .def_readwrite("SubsectionSizeQuads", &ULandscapeComponent::SubsectionSizeQuads)
        .def_readwrite("NumSubsections", &ULandscapeComponent::NumSubsections)
        .def_readwrite("MaterialInstance", &ULandscapeComponent::MaterialInstance)
        .def_readwrite("WeightmapLayerAllocations", &ULandscapeComponent::WeightmapLayerAllocations)
        .def_readwrite("WeightmapTextures", &ULandscapeComponent::WeightmapTextures)
        .def_readwrite("WeightmapScaleBias", &ULandscapeComponent::WeightmapScaleBias)
        .def_readwrite("WeightmapSubsectionOffset", &ULandscapeComponent::WeightmapSubsectionOffset)
        .def_readwrite("HeightmapScaleBias", &ULandscapeComponent::HeightmapScaleBias)
        .def_readwrite("HeightmapTexture", &ULandscapeComponent::HeightmapTexture)
        .def_readwrite("CachedBoxSphereBounds", &ULandscapeComponent::CachedBoxSphereBounds)
        .def_readwrite("StaticLightingResolution", &ULandscapeComponent::StaticLightingResolution)
        .def_readwrite("ShadowMaps", &ULandscapeComponent::ShadowMaps)
        .def_readwrite("IrrelevantLights", &ULandscapeComponent::IrrelevantLights)
        .def_readwrite("LightMap", &ULandscapeComponent::LightMap)
        .def_readwrite("EditToolRenderData", &ULandscapeComponent::EditToolRenderData)
        .def_readwrite("CollisionMipLevel", &ULandscapeComponent::CollisionMipLevel)
        .def_readwrite("PlatformData", &ULandscapeComponent::PlatformData)
        .def_readwrite("PlatformDataSize", &ULandscapeComponent::PlatformDataSize)
        .def("StaticClass", &ULandscapeComponent::StaticClass, py::return_value_policy::reference)
          ;
}
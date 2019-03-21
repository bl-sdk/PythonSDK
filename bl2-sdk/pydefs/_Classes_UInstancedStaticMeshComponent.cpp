#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInstancedStaticMeshComponent()
{
    class_< UInstancedStaticMeshComponent, bases< UStaticMeshComponent >  , boost::noncopyable>("UInstancedStaticMeshComponent", no_init)
        .def_readwrite("PerInstanceData", &UInstancedStaticMeshComponent::PerInstanceData)
        .def_readwrite("PerInstanceSMData", &UInstancedStaticMeshComponent::PerInstanceSMData)
        .def_readwrite("NumPendingLightmaps", &UInstancedStaticMeshComponent::NumPendingLightmaps)
        .def_readwrite("ComponentJoinKey", &UInstancedStaticMeshComponent::ComponentJoinKey)
        .def_readwrite("CachedMappings", &UInstancedStaticMeshComponent::CachedMappings)
        .def_readwrite("InstancingRandomSeed", &UInstancedStaticMeshComponent::InstancingRandomSeed)
        .def("StaticClass", &UInstancedStaticMeshComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
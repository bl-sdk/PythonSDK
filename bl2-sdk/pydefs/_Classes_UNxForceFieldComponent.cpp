#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNxForceFieldComponent()
{
    class_< UNxForceFieldComponent, bases< UPrimitiveComponent >  , boost::noncopyable>("UNxForceFieldComponent", no_init)
        .def_readwrite("Shape", &UNxForceFieldComponent::Shape)
        .def_readwrite("DrawComponent", &UNxForceFieldComponent::DrawComponent)
        .def_readwrite("ExcludeChannel", &UNxForceFieldComponent::ExcludeChannel)
        .def_readwrite("CollideWithChannels", &UNxForceFieldComponent::CollideWithChannels)
        .def_readwrite("Duration", &UNxForceFieldComponent::Duration)
        .def_readwrite("ForceField", &UNxForceFieldComponent::ForceField)
        .def_readwrite("ConvexMeshes", &UNxForceFieldComponent::ConvexMeshes)
        .def_readwrite("ExclusionShapes", &UNxForceFieldComponent::ExclusionShapes)
        .def_readwrite("ExclusionShapePoses", &UNxForceFieldComponent::ExclusionShapePoses)
        .def_readwrite("SceneIndex", &UNxForceFieldComponent::SceneIndex)
        .def_readwrite("ElapsedTime", &UNxForceFieldComponent::ElapsedTime)
        .def_readwrite("RenderComponent", &UNxForceFieldComponent::RenderComponent)
        .def_readwrite("RBPhysScene", &UNxForceFieldComponent::RBPhysScene)
        .def("StaticClass", &UNxForceFieldComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("DoInitRBPhys", &UNxForceFieldComponent::DoInitRBPhys)
        .staticmethod("StaticClass")
  ;
}
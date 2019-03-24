#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNxForceFieldComponent(py::module &m)
{
    py::class_< UNxForceFieldComponent,  UPrimitiveComponent   >(m, "UNxForceFieldComponent")
		.def_static("StaticClass", &UNxForceFieldComponent::StaticClass, py::return_value_policy::reference)
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
        .def("DoInitRBPhys", &UNxForceFieldComponent::DoInitRBPhys)
          ;
}
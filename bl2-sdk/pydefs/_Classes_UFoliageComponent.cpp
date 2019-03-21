#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFoliageComponent()
{
    py::class_< UFoliageComponent,  UPrimitiveComponent   >("UFoliageComponent")
        .def_readwrite("LitInstances", &UFoliageComponent::LitInstances)
        .def_readwrite("StaticallyRelevantLights", &UFoliageComponent::StaticallyRelevantLights)
        .def_readwrite("StaticallyIrrelevantLights", &UFoliageComponent::StaticallyIrrelevantLights)
        .def_readonly("DirectionalStaticLightingScale", &UFoliageComponent::DirectionalStaticLightingScale)
        .def_readonly("SimpleStaticLightingScale", &UFoliageComponent::SimpleStaticLightingScale)
        .def_readwrite("InstanceStaticMesh", &UFoliageComponent::InstanceStaticMesh)
        .def_readwrite("Material", &UFoliageComponent::Material)
        .def_readwrite("MaxDrawRadius", &UFoliageComponent::MaxDrawRadius)
        .def_readwrite("MinTransitionRadius", &UFoliageComponent::MinTransitionRadius)
        .def_readwrite("MinThinningRadius", &UFoliageComponent::MinThinningRadius)
        .def_readwrite("MinScale", &UFoliageComponent::MinScale)
        .def_readwrite("MaxScale", &UFoliageComponent::MaxScale)
        .def_readwrite("SwayScale", &UFoliageComponent::SwayScale)
        .def("StaticClass", &UFoliageComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
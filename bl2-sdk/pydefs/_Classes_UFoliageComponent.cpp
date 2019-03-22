#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFoliageComponent(py::module &m)
{
    py::class_< UFoliageComponent,  UPrimitiveComponent   >(m, "UFoliageComponent")
        .def_readwrite("LitInstances", &UFoliageComponent::LitInstances)
        .def_readwrite("StaticallyRelevantLights", &UFoliageComponent::StaticallyRelevantLights)
        .def_readwrite("StaticallyIrrelevantLights", &UFoliageComponent::StaticallyIrrelevantLights)
        .def_readwrite("InstanceStaticMesh", &UFoliageComponent::InstanceStaticMesh)
        .def_readwrite("Material", &UFoliageComponent::Material)
        .def_readwrite("MaxDrawRadius", &UFoliageComponent::MaxDrawRadius)
        .def_readwrite("MinTransitionRadius", &UFoliageComponent::MinTransitionRadius)
        .def_readwrite("MinThinningRadius", &UFoliageComponent::MinThinningRadius)
        .def_readwrite("MinScale", &UFoliageComponent::MinScale)
        .def_readwrite("MaxScale", &UFoliageComponent::MaxScale)
        .def_readwrite("SwayScale", &UFoliageComponent::SwayScale)
          ;
}
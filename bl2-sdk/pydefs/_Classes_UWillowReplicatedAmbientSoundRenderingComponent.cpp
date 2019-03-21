#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowReplicatedAmbientSoundRenderingComponent()
{
    py::class_< UWillowReplicatedAmbientSoundRenderingComponent,  UPrimitiveComponent   >("UWillowReplicatedAmbientSoundRenderingComponent")
        .def("StaticClass", &UWillowReplicatedAmbientSoundRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
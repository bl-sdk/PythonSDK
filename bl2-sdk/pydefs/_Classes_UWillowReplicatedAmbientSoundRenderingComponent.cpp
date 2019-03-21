#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowReplicatedAmbientSoundRenderingComponent(py::object m)
{
    py::class_< UWillowReplicatedAmbientSoundRenderingComponent,  UPrimitiveComponent   >(m, "UWillowReplicatedAmbientSoundRenderingComponent")
        .def("StaticClass", &UWillowReplicatedAmbientSoundRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}
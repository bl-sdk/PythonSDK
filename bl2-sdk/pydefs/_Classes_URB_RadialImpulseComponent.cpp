#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_URB_RadialImpulseComponent(py::module &m)
{
    py::class_< URB_RadialImpulseComponent,  UPrimitiveComponent   >(m, "URB_RadialImpulseComponent")
        .def_readwrite("ImpulseFalloff", &URB_RadialImpulseComponent::ImpulseFalloff)
        .def_readwrite("ImpulseStrength", &URB_RadialImpulseComponent::ImpulseStrength)
        .def_readwrite("ImpulseRadius", &URB_RadialImpulseComponent::ImpulseRadius)
        .def_readwrite("PreviewSphere", &URB_RadialImpulseComponent::PreviewSphere)
        .def("FireImpulse", &URB_RadialImpulseComponent::FireImpulse)
          ;
}
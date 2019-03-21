#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkAmbientSoundRenderingComponent()
{
    py::class_< UAkAmbientSoundRenderingComponent,  UPrimitiveComponent   >("UAkAmbientSoundRenderingComponent")
        .def("StaticClass", &UAkAmbientSoundRenderingComponent::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
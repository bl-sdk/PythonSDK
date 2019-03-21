#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAkAmbientSoundRenderingComponent(py::object m)
{
    py::class_< UAkAmbientSoundRenderingComponent,  UPrimitiveComponent   >(m, "UAkAmbientSoundRenderingComponent")
        .def("StaticClass", &UAkAmbientSoundRenderingComponent::StaticClass, py::return_value_policy::reference)
          ;
}
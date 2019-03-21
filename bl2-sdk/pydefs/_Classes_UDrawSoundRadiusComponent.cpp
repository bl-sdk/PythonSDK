#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawSoundRadiusComponent(py::object m)
{
    py::class_< UDrawSoundRadiusComponent,  UDrawSphereComponent   >(m, "UDrawSoundRadiusComponent")
        .def("StaticClass", &UDrawSoundRadiusComponent::StaticClass, py::return_value_policy::reference)
          ;
}
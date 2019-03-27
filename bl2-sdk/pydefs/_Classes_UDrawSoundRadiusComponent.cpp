#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDrawSoundRadiusComponent(py::module &m)
{
    py::class_< UDrawSoundRadiusComponent,  UDrawSphereComponent   >(m, "UDrawSoundRadiusComponent")
		.def_static("StaticClass", &UDrawSoundRadiusComponent::StaticClass, py::return_value_policy::reference)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USphericalHarmonicLightComponent(py::module &m)
{
    py::class_< USphericalHarmonicLightComponent,  ULightComponent   >(m, "USphericalHarmonicLightComponent")
        .def_readwrite("WorldSpaceIncidentLighting", &USphericalHarmonicLightComponent::WorldSpaceIncidentLighting)
        .def_readwrite("IndirectColor", &USphericalHarmonicLightComponent::IndirectColor)
        .def_readwrite("IndirectDirection", &USphericalHarmonicLightComponent::IndirectDirection)
          ;
}
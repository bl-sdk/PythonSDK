#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USphericalHarmonicLightComponent(py::object m)
{
    py::class_< USphericalHarmonicLightComponent,  ULightComponent   >(m, "USphericalHarmonicLightComponent")
        .def_readonly("UnknownData00", &USphericalHarmonicLightComponent::UnknownData00)
        .def_readwrite("WorldSpaceIncidentLighting", &USphericalHarmonicLightComponent::WorldSpaceIncidentLighting)
        .def_readwrite("IndirectColor", &USphericalHarmonicLightComponent::IndirectColor)
        .def_readwrite("IndirectDirection", &USphericalHarmonicLightComponent::IndirectDirection)
        .def("StaticClass", &USphericalHarmonicLightComponent::StaticClass, py::return_value_policy::reference)
          ;
}
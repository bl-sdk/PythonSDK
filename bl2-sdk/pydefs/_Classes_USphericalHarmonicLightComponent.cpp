#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USphericalHarmonicLightComponent()
{
    class_< USphericalHarmonicLightComponent, bases< ULightComponent >  , boost::noncopyable>("USphericalHarmonicLightComponent", no_init)
        .def_readonly("UnknownData00", &USphericalHarmonicLightComponent::UnknownData00)
        .def_readwrite("WorldSpaceIncidentLighting", &USphericalHarmonicLightComponent::WorldSpaceIncidentLighting)
        .def_readwrite("IndirectColor", &USphericalHarmonicLightComponent::IndirectColor)
        .def_readwrite("IndirectDirection", &USphericalHarmonicLightComponent::IndirectDirection)
        .def("StaticClass", &USphericalHarmonicLightComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
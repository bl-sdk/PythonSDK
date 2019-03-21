#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ASpotLight()
{
    class_< ASpotLight, bases< AActor >  , boost::noncopyable>("ASpotLight", no_init)
        .def_readwrite("LightComponent", &ALight::LightComponent)
        .def("StaticClass", &ASpotLight::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ALight::OnToggle)
        .def("eventReplicatedEvent", &ALight::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}
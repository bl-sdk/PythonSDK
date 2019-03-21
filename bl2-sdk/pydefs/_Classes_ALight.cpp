#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ALight()
{
    class_< ALight, bases< AActor >  , boost::noncopyable>("ALight", no_init)
        .def_readwrite("LightComponent", &ALight::LightComponent)
        .def("StaticClass", &ALight::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &ALight::OnToggle)
        .def("eventReplicatedEvent", &ALight::eventReplicatedEvent)
        .staticmethod("StaticClass")
  ;
}
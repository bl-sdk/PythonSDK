#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AExponentialHeightFog()
{
    class_< AExponentialHeightFog, bases< AInfo >  , boost::noncopyable>("AExponentialHeightFog", no_init)
        .def_readwrite("Component", &AExponentialHeightFog::Component)
        .def("StaticClass", &AExponentialHeightFog::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &AExponentialHeightFog::OnToggle)
        .def("eventReplicatedEvent", &AExponentialHeightFog::eventReplicatedEvent)
        .def("eventPostBeginPlay", &AExponentialHeightFog::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}
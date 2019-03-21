#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AHeightFog()
{
    class_< AHeightFog, bases< AInfo >  , boost::noncopyable>("AHeightFog", no_init)
        .def_readwrite("Component", &AHeightFog::Component)
        .def("StaticClass", &AHeightFog::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnToggle", &AHeightFog::OnToggle)
        .def("eventReplicatedEvent", &AHeightFog::eventReplicatedEvent)
        .def("eventPostBeginPlay", &AHeightFog::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}
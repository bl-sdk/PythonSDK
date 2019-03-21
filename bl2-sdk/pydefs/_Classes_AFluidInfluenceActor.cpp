#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AFluidInfluenceActor()
{
    class_< AFluidInfluenceActor, bases< AActor >  , boost::noncopyable>("AFluidInfluenceActor", no_init)
        .def_readwrite("FlowDirection", &AFluidInfluenceActor::FlowDirection)
        .def_readwrite("Sprite", &AFluidInfluenceActor::Sprite)
        .def_readwrite("InfluenceComponent", &AFluidInfluenceActor::InfluenceComponent)
        .def("StaticClass", &AFluidInfluenceActor::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventReplicatedEvent", &AFluidInfluenceActor::eventReplicatedEvent)
        .def("OnToggle", &AFluidInfluenceActor::OnToggle)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FFadePickupParticle()
{
    class_< FFadePickupParticle >("FFadePickupParticle", no_init)
        .def_readwrite("SourceActor", &FFadePickupParticle::SourceActor)
        .def_readwrite("Particle", &FFadePickupParticle::Particle)
        .def_readwrite("FadeEndTime", &FFadePickupParticle::FadeEndTime)
  ;
}
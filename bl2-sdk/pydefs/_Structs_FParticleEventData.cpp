#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleEventData()
{
    class_< FParticleEventData >("FParticleEventData", no_init)
        .def_readwrite("Type", &FParticleEventData::Type)
        .def_readwrite("EventName", &FParticleEventData::EventName)
        .def_readwrite("EmitterTime", &FParticleEventData::EmitterTime)
        .def_readwrite("Location", &FParticleEventData::Location)
        .def_readwrite("Direction", &FParticleEventData::Direction)
        .def_readwrite("Velocity", &FParticleEventData::Velocity)
  ;
}
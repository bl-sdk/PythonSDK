#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleEventCollideData()
{
    class_< FParticleEventCollideData, bases< FParticleEventData >  >("FParticleEventCollideData", no_init)
        .def_readwrite("ParticleTime", &FParticleEventCollideData::ParticleTime)
        .def_readwrite("Normal", &FParticleEventCollideData::Normal)
        .def_readwrite("Time", &FParticleEventCollideData::Time)
        .def_readwrite("Item", &FParticleEventCollideData::Item)
        .def_readwrite("BoneName", &FParticleEventCollideData::BoneName)
  ;
}
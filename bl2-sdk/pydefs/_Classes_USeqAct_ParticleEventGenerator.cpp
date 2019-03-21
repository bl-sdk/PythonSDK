#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ParticleEventGenerator()
{
    class_< USeqAct_ParticleEventGenerator, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ParticleEventGenerator", no_init)
        .def_readwrite("Instigator", &USeqAct_ParticleEventGenerator::Instigator)
        .def_readwrite("EventNames", &USeqAct_ParticleEventGenerator::EventNames)
        .def_readwrite("EventTime", &USeqAct_ParticleEventGenerator::EventTime)
        .def_readwrite("EventLocation", &USeqAct_ParticleEventGenerator::EventLocation)
        .def_readwrite("EventDirection", &USeqAct_ParticleEventGenerator::EventDirection)
        .def_readwrite("EventVelocity", &USeqAct_ParticleEventGenerator::EventVelocity)
        .def_readwrite("EventNormal", &USeqAct_ParticleEventGenerator::EventNormal)
        .def("StaticClass", &USeqAct_ParticleEventGenerator::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_ParticleEventGenerator::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}
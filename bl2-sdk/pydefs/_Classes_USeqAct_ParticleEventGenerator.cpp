#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ParticleEventGenerator(py::object m)
{
    py::class_< USeqAct_ParticleEventGenerator,  USequenceAction   >(m, "USeqAct_ParticleEventGenerator")
        .def_readwrite("Instigator", &USeqAct_ParticleEventGenerator::Instigator)
        .def_readwrite("EventNames", &USeqAct_ParticleEventGenerator::EventNames)
        .def_readwrite("EventTime", &USeqAct_ParticleEventGenerator::EventTime)
        .def_readwrite("EventLocation", &USeqAct_ParticleEventGenerator::EventLocation)
        .def_readwrite("EventDirection", &USeqAct_ParticleEventGenerator::EventDirection)
        .def_readwrite("EventVelocity", &USeqAct_ParticleEventGenerator::EventVelocity)
        .def_readwrite("EventNormal", &USeqAct_ParticleEventGenerator::EventNormal)
        .def("StaticClass", &USeqAct_ParticleEventGenerator::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_ParticleEventGenerator::eventGetObjClassVersion)
          ;
}
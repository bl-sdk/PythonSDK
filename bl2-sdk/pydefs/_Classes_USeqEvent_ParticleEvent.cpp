#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqEvent_ParticleEvent(py::module &m)
{
    py::class_< USeqEvent_ParticleEvent,  USequenceEvent   >(m, "USeqEvent_ParticleEvent")
        .def_readwrite("EventType", &USeqEvent_ParticleEvent::EventType)
        .def_readwrite("EventPosition", &USeqEvent_ParticleEvent::EventPosition)
        .def_readwrite("EventEmitterTime", &USeqEvent_ParticleEvent::EventEmitterTime)
        .def_readwrite("EventVelocity", &USeqEvent_ParticleEvent::EventVelocity)
        .def_readwrite("EventParticleTime", &USeqEvent_ParticleEvent::EventParticleTime)
        .def_readwrite("EventNormal", &USeqEvent_ParticleEvent::EventNormal)
        .def("StaticClass", &USeqEvent_ParticleEvent::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqEvent_ParticleEvent::eventGetObjClassVersion)
          ;
}
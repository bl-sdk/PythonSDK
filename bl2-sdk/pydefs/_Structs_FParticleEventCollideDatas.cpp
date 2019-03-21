#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleEventCollideData(py::object m)
{
    py::class_< FParticleEventCollideData,  FParticleEventData   >(m, "FParticleEventCollideData")
        .def_readwrite("ParticleTime", &FParticleEventCollideData::ParticleTime)
        .def_readwrite("Normal", &FParticleEventCollideData::Normal)
        .def_readwrite("Time", &FParticleEventCollideData::Time)
        .def_readwrite("Item", &FParticleEventCollideData::Item)
        .def_readwrite("BoneName", &FParticleEventCollideData::BoneName)
  ;
}
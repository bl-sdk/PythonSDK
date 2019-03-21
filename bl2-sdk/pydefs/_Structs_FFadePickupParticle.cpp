#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FFadePickupParticle()
{
    py::class_< FFadePickupParticle >("FFadePickupParticle")
        .def_readwrite("SourceActor", &FFadePickupParticle::SourceActor)
        .def_readwrite("Particle", &FFadePickupParticle::Particle)
        .def_readwrite("FadeEndTime", &FFadePickupParticle::FadeEndTime)
  ;
}
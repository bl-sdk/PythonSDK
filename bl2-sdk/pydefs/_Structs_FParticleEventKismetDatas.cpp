#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleEventKismetData()
{
    py::class_< FParticleEventKismetData,  FParticleEventData   >("FParticleEventKismetData")
        .def_readwrite("Normal", &FParticleEventKismetData::Normal)
  ;
}
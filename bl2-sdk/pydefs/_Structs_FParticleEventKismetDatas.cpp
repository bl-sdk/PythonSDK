#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleEventKismetData(py::object m)
{
    py::class_< FParticleEventKismetData,  FParticleEventData   >(m, "FParticleEventKismetData")
        .def_readwrite("Normal", &FParticleEventKismetData::Normal)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FParticleBurst()
{
    py::class_< FParticleBurst >("FParticleBurst")
        .def_readwrite("Count", &FParticleBurst::Count)
        .def_readwrite("CountLow", &FParticleBurst::CountLow)
        .def_readwrite("Time", &FParticleBurst::Time)
        .def_readwrite("CountDistribution", &FParticleBurst::CountDistribution)
  ;
}
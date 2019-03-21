#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleBurst()
{
    class_< FParticleBurst >("FParticleBurst", no_init)
        .def_readwrite("Count", &FParticleBurst::Count)
        .def_readwrite("CountLow", &FParticleBurst::CountLow)
        .def_readwrite("Time", &FParticleBurst::Time)
        .def_readwrite("CountDistribution", &FParticleBurst::CountDistribution)
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FParticleEventKismetData()
{
    class_< FParticleEventKismetData, bases< FParticleEventData >  >("FParticleEventKismetData", no_init)
        .def_readwrite("Normal", &FParticleEventKismetData::Normal)
  ;
}
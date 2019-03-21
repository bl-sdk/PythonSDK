#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPhysXEmitterVerticalLodProperties()
{
    class_< FPhysXEmitterVerticalLodProperties >("FPhysXEmitterVerticalLodProperties", no_init)
        .def_readwrite("WeightForFifo", &FPhysXEmitterVerticalLodProperties::WeightForFifo)
        .def_readwrite("WeightForSpawnLod", &FPhysXEmitterVerticalLodProperties::WeightForSpawnLod)
        .def_readwrite("SpawnLodRateVsLifeBias", &FPhysXEmitterVerticalLodProperties::SpawnLodRateVsLifeBias)
        .def_readwrite("RelativeFadeoutTime", &FPhysXEmitterVerticalLodProperties::RelativeFadeoutTime)
  ;
}
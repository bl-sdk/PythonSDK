#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPhysXEmitterVerticalLodProperties(py::module &m)
{
    py::class_< FPhysXEmitterVerticalLodProperties >(m, "FPhysXEmitterVerticalLodProperties")
        .def_readwrite("WeightForFifo", &FPhysXEmitterVerticalLodProperties::WeightForFifo)
        .def_readwrite("WeightForSpawnLod", &FPhysXEmitterVerticalLodProperties::WeightForSpawnLod)
        .def_readwrite("SpawnLodRateVsLifeBias", &FPhysXEmitterVerticalLodProperties::SpawnLodRateVsLifeBias)
        .def_readwrite("RelativeFadeoutTime", &FPhysXEmitterVerticalLodProperties::RelativeFadeoutTime)
  ;
}
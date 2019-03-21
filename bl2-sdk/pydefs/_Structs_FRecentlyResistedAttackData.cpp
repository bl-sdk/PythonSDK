#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRecentlyResistedAttackData()
{
    py::class_< FRecentlyResistedAttackData >("FRecentlyResistedAttackData")
        .def_readwrite("DamagedActor", &FRecentlyResistedAttackData::DamagedActor)
        .def_readwrite("DamageType", &FRecentlyResistedAttackData::DamageType)
        .def_readwrite("LastResistTime", &FRecentlyResistedAttackData::LastResistTime)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRecentlyResistedAttackData(py::module &m)
{
    py::class_< FRecentlyResistedAttackData >(m, "FRecentlyResistedAttackData")
        .def_readwrite("DamagedActor", &FRecentlyResistedAttackData::DamagedActor)
        .def_readwrite("DamageType", &FRecentlyResistedAttackData::DamageType)
        .def_readwrite("LastResistTime", &FRecentlyResistedAttackData::LastResistTime)
  ;
}
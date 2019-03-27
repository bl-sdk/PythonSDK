#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTurretDamageEffectData(py::module &m)
{
    py::class_< FTurretDamageEffectData >(m, "FTurretDamageEffectData")
        .def_readwrite("DamageThreshold", &FTurretDamageEffectData::DamageThreshold)
        .def_readwrite("DamageStartTagName", &FTurretDamageEffectData::DamageStartTagName)
        .def_readwrite("DamageEndTagName", &FTurretDamageEffectData::DamageEndTagName)
  ;
}
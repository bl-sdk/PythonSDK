#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageInfo(py::object m)
{
    py::class_< FDamageInfo >(m, "FDamageInfo")
        .def_readwrite("Instigator", &FDamageInfo::Instigator)
        .def_readwrite("HitLocation", &FDamageInfo::HitLocation)
        .def_readwrite("DamageType", &FDamageInfo::DamageType)
        .def_readwrite("DamageTypeDefinition", &FDamageInfo::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &FDamageInfo::ImpactDefinition)
  ;
}
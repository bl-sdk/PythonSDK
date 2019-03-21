#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamageInfo()
{
    class_< FDamageInfo >("FDamageInfo", no_init)
        .def_readwrite("Instigator", &FDamageInfo::Instigator)
        .def_readwrite("HitLocation", &FDamageInfo::HitLocation)
        .def_readwrite("DamageType", &FDamageInfo::DamageType)
        .def_readwrite("DamageTypeDefinition", &FDamageInfo::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &FDamageInfo::ImpactDefinition)
  ;
}
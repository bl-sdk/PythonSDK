#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedLightProjectile()
{
    class_< FReplicatedLightProjectile >("FReplicatedLightProjectile", no_init)
        .def_readwrite("Id", &FReplicatedLightProjectile::Id)
        .def_readwrite("StartTrace", &FReplicatedLightProjectile::StartTrace)
        .def_readwrite("EndTrace", &FReplicatedLightProjectile::EndTrace)
        .def_readwrite("ReflectSpeed", &FReplicatedLightProjectile::ReflectSpeed)
        .def_readwrite("FireDef", &FReplicatedLightProjectile::FireDef)
        .def_readwrite("FiringPatternIdx", &FReplicatedLightProjectile::FiringPatternIdx)
        .def_readwrite("Instigator", &FReplicatedLightProjectile::Instigator)
        .def_readwrite("StartTime", &FReplicatedLightProjectile::StartTime)
  ;
}
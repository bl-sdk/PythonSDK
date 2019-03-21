#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHomingTargetedActorInfo()
{
    class_< FHomingTargetedActorInfo >("FHomingTargetedActorInfo", no_init)
        .def_readwrite("HomingActor", &FHomingTargetedActorInfo::HomingActor)
        .def_readwrite("HomingActorCount", &FHomingTargetedActorInfo::HomingActorCount)
  ;
}
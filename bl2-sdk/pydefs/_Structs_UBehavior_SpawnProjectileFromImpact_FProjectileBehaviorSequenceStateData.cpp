#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData()
{
    class_< UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData >("UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData", no_init)
        .def_readwrite("Action", &UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &UBehavior_SpawnProjectileFromImpact_FProjectileBehaviorSequenceStateData::SequenceName)
  ;
}
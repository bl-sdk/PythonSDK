#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData()
{
    class_< UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData >("UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData", no_init)
        .def_readwrite("Action", &UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData::Action)
        .def_readwrite("SequenceName", &UBehavior_SpawnProjectile_FProjectileBehaviorSequenceStateData::SequenceName)
  ;
}
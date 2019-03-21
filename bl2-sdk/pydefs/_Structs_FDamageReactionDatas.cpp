#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamageReactionData()
{
    class_< FDamageReactionData, bases< FSpecializedBehaviorEvent >  >("FDamageReactionData", no_init)
        .def_readwrite("DamageTriggers", &FDamageReactionData::DamageTriggers)
        .def_readwrite("PercentOfHealthTrigger", &FDamageReactionData::PercentOfHealthTrigger)
        .def_readwrite("DamageSpecialMove", &FDamageReactionData::DamageSpecialMove)
        .def_readwrite("ReactionBehaviors", &FDamageReactionData::ReactionBehaviors)
  ;
}
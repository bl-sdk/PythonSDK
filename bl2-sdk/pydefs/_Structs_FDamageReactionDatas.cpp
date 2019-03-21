#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageReactionData(py::object m)
{
    py::class_< FDamageReactionData,  FSpecializedBehaviorEvent   >(m, "FDamageReactionData")
        .def_readwrite("DamageTriggers", &FDamageReactionData::DamageTriggers)
        .def_readwrite("PercentOfHealthTrigger", &FDamageReactionData::PercentOfHealthTrigger)
        .def_readwrite("DamageSpecialMove", &FDamageReactionData::DamageSpecialMove)
        .def_readwrite("ReactionBehaviors", &FDamageReactionData::ReactionBehaviors)
  ;
}
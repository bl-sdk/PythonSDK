#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowTrigger()
{
    class_< AWillowTrigger, bases< ATrigger >  , boost::noncopyable>("AWillowTrigger", no_init)
        .def_readwrite("VfTable_IIUsable", &AWillowTrigger::VfTable_IIUsable)
        .def_readwrite("HUDIcon", &AWillowTrigger::HUDIcon)
        .def_readwrite("CostsToUseType", &AWillowTrigger::CostsToUseType)
        .def_readwrite("HUDIconDef", &AWillowTrigger::HUDIconDef)
        .def_readwrite("ParticleHighlight", &AWillowTrigger::ParticleHighlight)
        .def_readwrite("TriggerSprite", &AWillowTrigger::TriggerSprite)
        .def_readwrite("CostsToUseAmount", &AWillowTrigger::CostsToUseAmount)
        .def("StaticClass", &AWillowTrigger::StaticClass, return_value_policy< reference_existing_object >())
        .def("NotifyUserCouldNotAffordAttemptedUse", &AWillowTrigger::NotifyUserCouldNotAffordAttemptedUse)
        .def("SetInteractionIcon", &AWillowTrigger::SetInteractionIcon)
        .def("UseObject", &AWillowTrigger::UseObject)
        .def("PostBeginPlay", &AWillowTrigger::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}
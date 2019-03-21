#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowTrigger(py::object m)
{
    py::class_< AWillowTrigger,  ATrigger   >(m, "AWillowTrigger")
        .def_readwrite("VfTable_IIUsable", &AWillowTrigger::VfTable_IIUsable)
        .def_readwrite("HUDIcon", &AWillowTrigger::HUDIcon)
        .def_readwrite("CostsToUseType", &AWillowTrigger::CostsToUseType)
        .def_readwrite("HUDIconDef", &AWillowTrigger::HUDIconDef)
        .def_readwrite("ParticleHighlight", &AWillowTrigger::ParticleHighlight)
        .def_readwrite("TriggerSprite", &AWillowTrigger::TriggerSprite)
        .def_readwrite("CostsToUseAmount", &AWillowTrigger::CostsToUseAmount)
        .def("StaticClass", &AWillowTrigger::StaticClass, py::return_value_policy::reference)
        .def("NotifyUserCouldNotAffordAttemptedUse", &AWillowTrigger::NotifyUserCouldNotAffordAttemptedUse)
        .def("SetInteractionIcon", &AWillowTrigger::SetInteractionIcon)
        .def("UseObject", &AWillowTrigger::UseObject)
        .def("PostBeginPlay", &AWillowTrigger::PostBeginPlay)
          ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGearboxCoverState()
{
    class_< FGearboxCoverState >("FGearboxCoverState", no_init)
        .def_readwrite("TheCoverActor", &FGearboxCoverState::TheCoverActor)
        .def_readwrite("SlotIndex", &FGearboxCoverState::SlotIndex)
        .def_readwrite("State", &FGearboxCoverState::State)
        .def_readwrite("ExtendedState", &FGearboxCoverState::ExtendedState)
        .def_readwrite("MetaData", &FGearboxCoverState::MetaData)
        .def_readwrite("ExtendedMetaData", &FGearboxCoverState::ExtendedMetaData)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearboxCoverState(py::object m)
{
    py::class_< FGearboxCoverState >(m, "FGearboxCoverState")
        .def_readwrite("TheCoverActor", &FGearboxCoverState::TheCoverActor)
        .def_readwrite("SlotIndex", &FGearboxCoverState::SlotIndex)
        .def_readwrite("State", &FGearboxCoverState::State)
        .def_readwrite("ExtendedState", &FGearboxCoverState::ExtendedState)
        .def_readwrite("MetaData", &FGearboxCoverState::MetaData)
        .def_readwrite("ExtendedMetaData", &FGearboxCoverState::ExtendedMetaData)
  ;
}
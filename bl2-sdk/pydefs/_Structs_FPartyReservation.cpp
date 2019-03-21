#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPartyReservation()
{
    py::class_< FPartyReservation >("FPartyReservation")
        .def_readwrite("TeamNum", &FPartyReservation::TeamNum)
        .def_readwrite("PartyLeader", &FPartyReservation::PartyLeader)
        .def_readwrite("PartyMembers", &FPartyReservation::PartyMembers)
  ;
}
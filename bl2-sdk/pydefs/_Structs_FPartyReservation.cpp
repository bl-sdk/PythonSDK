#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPartyReservation(py::object m)
{
    py::class_< FPartyReservation >(m, "FPartyReservation")
        .def_readwrite("TeamNum", &FPartyReservation::TeamNum)
        .def_readwrite("PartyLeader", &FPartyReservation::PartyLeader)
        .def_readwrite("PartyMembers", &FPartyReservation::PartyMembers)
  ;
}
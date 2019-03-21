#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPartyReservation()
{
    class_< FPartyReservation >("FPartyReservation", no_init)
        .def_readwrite("TeamNum", &FPartyReservation::TeamNum)
        .def_readwrite("PartyLeader", &FPartyReservation::PartyLeader)
        .def_readwrite("PartyMembers", &FPartyReservation::PartyMembers)
  ;
}
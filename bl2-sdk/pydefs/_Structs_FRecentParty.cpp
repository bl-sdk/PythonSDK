#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRecentParty()
{
    py::class_< FRecentParty >("FRecentParty")
        .def_readwrite("PartyLeader", &FRecentParty::PartyLeader)
        .def_readwrite("PartyMembers", &FRecentParty::PartyMembers)
  ;
}
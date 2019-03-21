#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRecentParty(py::object m)
{
    py::class_< FRecentParty >(m, "FRecentParty")
        .def_readwrite("PartyLeader", &FRecentParty::PartyLeader)
        .def_readwrite("PartyMembers", &FRecentParty::PartyMembers)
  ;
}
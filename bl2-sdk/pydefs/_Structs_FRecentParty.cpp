#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRecentParty()
{
    class_< FRecentParty >("FRecentParty", no_init)
        .def_readwrite("PartyLeader", &FRecentParty::PartyLeader)
        .def_readwrite("PartyMembers", &FRecentParty::PartyMembers)
  ;
}
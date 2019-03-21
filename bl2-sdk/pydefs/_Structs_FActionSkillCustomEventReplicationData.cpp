#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FActionSkillCustomEventReplicationData()
{
    class_< FActionSkillCustomEventReplicationData >("FActionSkillCustomEventReplicationData", no_init)
        .def_readwrite("EventCountForReplication", &FActionSkillCustomEventReplicationData::EventCountForReplication)
        .def_readwrite("EventName", &FActionSkillCustomEventReplicationData::EventName)
  ;
}
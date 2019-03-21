#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FActionSkillCustomEventReplicationData(py::object m)
{
    py::class_< FActionSkillCustomEventReplicationData >(m, "FActionSkillCustomEventReplicationData")
        .def_readwrite("EventCountForReplication", &FActionSkillCustomEventReplicationData::EventCountForReplication)
        .def_readwrite("EventName", &FActionSkillCustomEventReplicationData::EventName)
  ;
}
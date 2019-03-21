#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPersistentSequenceEventData()
{
    class_< FPersistentSequenceEventData >("FPersistentSequenceEventData", no_init)
        .def_readwrite("TriggerCount", &FPersistentSequenceEventData::TriggerCount)
        .def_readwrite("VfTable", &FPersistentData::VfTable)
  ;
}
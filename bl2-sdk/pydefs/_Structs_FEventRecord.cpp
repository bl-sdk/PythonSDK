#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEventRecord()
{
    class_< FEventRecord >("FEventRecord", no_init)
        .def_readwrite("EventDefinition", &FEventRecord::EventDefinition)
        .def_readwrite("OtherEventParticipantObject", &FEventRecord::OtherEventParticipantObject)
  ;
}
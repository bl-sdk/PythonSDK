#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEventRecord()
{
    py::class_< FEventRecord >("FEventRecord")
        .def_readwrite("EventDefinition", &FEventRecord::EventDefinition)
        .def_readwrite("OtherEventParticipantObject", &FEventRecord::OtherEventParticipantObject)
  ;
}
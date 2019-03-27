#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEventRecord(py::module &m)
{
    py::class_< FEventRecord >(m, "FEventRecord")
        .def_readwrite("EventDefinition", &FEventRecord::EventDefinition)
        .def_readwrite("OtherEventParticipantObject", &FEventRecord::OtherEventParticipantObject)
  ;
}
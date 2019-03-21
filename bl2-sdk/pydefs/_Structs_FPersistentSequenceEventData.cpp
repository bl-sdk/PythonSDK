#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPersistentSequenceEventData(py::object m)
{
    py::class_< FPersistentSequenceEventData >(m, "FPersistentSequenceEventData")
        .def_readwrite("TriggerCount", &FPersistentSequenceEventData::TriggerCount)
        .def_readwrite("VfTable", &FPersistentData::VfTable)
  ;
}
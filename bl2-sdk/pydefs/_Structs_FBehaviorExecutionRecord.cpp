#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorExecutionRecord(py::module &m)
{
    py::class_< FBehaviorExecutionRecord >(m, "FBehaviorExecutionRecord")
        .def_readwrite("OwningProcessID", &FBehaviorExecutionRecord::OwningProcessID)
        .def_readwrite("ProvidersIndex", &FBehaviorExecutionRecord::ProvidersIndex)
        .def_readwrite("SequencesDataIndex", &FBehaviorExecutionRecord::SequencesDataIndex)
        .def_readwrite("BehaviorNumber", &FBehaviorExecutionRecord::BehaviorNumber)
        .def_readwrite("BehaviorName", &FBehaviorExecutionRecord::BehaviorName)
        .def_readwrite("TimeOfExecution", &FBehaviorExecutionRecord::TimeOfExecution)
  ;
}
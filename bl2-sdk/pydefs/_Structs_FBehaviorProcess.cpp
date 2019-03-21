#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorProcess()
{
    py::class_< FBehaviorProcess >("FBehaviorProcess")
        .def_readwrite("Owner", &FBehaviorProcess::Owner)
        .def_readwrite("ProcessID", &FBehaviorProcess::ProcessID)
        .def_readwrite("SequenceEnabledBitField", &FBehaviorProcess::SequenceEnabledBitField)
        .def_readwrite("ProcessState", &FBehaviorProcess::ProcessState)
        .def_readwrite("NextSequenceEnabledBitIndexToUse", &FBehaviorProcess::NextSequenceEnabledBitIndexToUse)
        .def_readwrite("bSupportsReplicatedSequenceState", &FBehaviorProcess::bSupportsReplicatedSequenceState)
        .def_readwrite("NumPendingProviderRemovalRequests", &FBehaviorProcess::NumPendingProviderRemovalRequests)
        .def_readwrite("Sequences", &FBehaviorProcess::Sequences)
        .def_readwrite("Events", &FBehaviorProcess::Events)
        .def_readwrite("Variables", &FBehaviorProcess::Variables)
  ;
}
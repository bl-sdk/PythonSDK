#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USequence(py::module &m)
{
    py::class_< USequence,  USequenceOp   >(m, "USequence")
		.def_static("StaticClass", &USequence::StaticClass, py::return_value_policy::reference)
        .def_readwrite("LogFile", &USequence::LogFile)
        .def_readwrite("SequenceObjects", &USequence::SequenceObjects)
        .def_readwrite("ActiveSequenceOps", &USequence::ActiveSequenceOps)
        .def_readwrite("NestedSequences", &USequence::NestedSequences)
        .def_readwrite("UnregisteredEvents", &USequence::UnregisteredEvents)
        .def_readwrite("DelayedActivatedOps", &USequence::DelayedActivatedOps)
        .def_readwrite("QueuedActivations", &USequence::QueuedActivations)
        .def_readwrite("DefaultViewX", &USequence::DefaultViewX)
        .def_readwrite("DefaultViewY", &USequence::DefaultViewY)
        .def_readwrite("DefaultViewZoom", &USequence::DefaultViewZoom)
        .def("SetEnabled", &USequence::SetEnabled)
        .def("Reset", &USequence::Reset)
        .def("FindSeqObjectsByName", &USequence::FindSeqObjectsByName)
        .def("FindSeqObjectsByClass", &USequence::FindSeqObjectsByClass)
          ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USequence()
{
    class_< USequence, bases< USequenceOp >  , boost::noncopyable>("USequence", no_init)
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
        .def("StaticClass", &USequence::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetEnabled", &USequence::SetEnabled)
        .def("Reset", &USequence::Reset)
        .def("FindSeqObjectsByName", &USequence::FindSeqObjectsByName)
        .def("FindSeqObjectsByClass", &USequence::FindSeqObjectsByClass)
        .staticmethod("StaticClass")
  ;
}
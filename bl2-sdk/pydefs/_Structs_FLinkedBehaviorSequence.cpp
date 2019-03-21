#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLinkedBehaviorSequence(py::object m)
{
    py::class_< FLinkedBehaviorSequence >(m, "FLinkedBehaviorSequence")
        .def_readwrite("ConsumerHandle", &FLinkedBehaviorSequence::ConsumerHandle)
        .def_readwrite("SequenceState", &FLinkedBehaviorSequence::SequenceState)
  ;
}
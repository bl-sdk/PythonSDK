#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLinkedBehaviorSequence()
{
    class_< FLinkedBehaviorSequence >("FLinkedBehaviorSequence", no_init)
        .def_readwrite("ConsumerHandle", &FLinkedBehaviorSequence::ConsumerHandle)
        .def_readwrite("SequenceState", &FLinkedBehaviorSequence::SequenceState)
  ;
}
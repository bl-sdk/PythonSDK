#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopulatedInteractiveObjectMemento()
{
    class_< FPopulatedInteractiveObjectMemento >("FPopulatedInteractiveObjectMemento", no_init)
        .def_readwrite("BehaviorSequenceState", &FPopulatedInteractiveObjectMemento::BehaviorSequenceState)
        .def_readonly("bCanBeUsed", &FPopulatedInteractiveObjectMemento::bCanBeUsed)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulatedInteractiveObjectMemento()
{
    py::class_< FPopulatedInteractiveObjectMemento >("FPopulatedInteractiveObjectMemento")
        .def_readwrite("BehaviorSequenceState", &FPopulatedInteractiveObjectMemento::BehaviorSequenceState)
        .def_readonly("bCanBeUsed", &FPopulatedInteractiveObjectMemento::bCanBeUsed)
  ;
}
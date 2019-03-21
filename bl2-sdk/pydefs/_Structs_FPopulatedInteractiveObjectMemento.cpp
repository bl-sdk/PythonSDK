#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulatedInteractiveObjectMemento(py::object m)
{
    py::class_< FPopulatedInteractiveObjectMemento >(m, "FPopulatedInteractiveObjectMemento")
        .def_readwrite("BehaviorSequenceState", &FPopulatedInteractiveObjectMemento::BehaviorSequenceState)
  ;
}
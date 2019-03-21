#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearboxCoverTransition()
{
    py::class_< FGearboxCoverTransition >("FGearboxCoverTransition")
        .def_readwrite("Action", &FGearboxCoverTransition::Action)
        .def_readwrite("ExtendedAction", &FGearboxCoverTransition::ExtendedAction)
        .def_readonly("Padding", &FGearboxCoverTransition::Padding)
  ;
}
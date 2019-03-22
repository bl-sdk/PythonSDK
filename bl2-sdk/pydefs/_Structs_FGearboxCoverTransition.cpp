#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearboxCoverTransition(py::module &m)
{
    py::class_< FGearboxCoverTransition >(m, "FGearboxCoverTransition")
        .def_readwrite("Action", &FGearboxCoverTransition::Action)
        .def_readwrite("ExtendedAction", &FGearboxCoverTransition::ExtendedAction)
  ;
}
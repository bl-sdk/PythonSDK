#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGearboxCoverTransition()
{
    class_< FGearboxCoverTransition >("FGearboxCoverTransition", no_init)
        .def_readwrite("Action", &FGearboxCoverTransition::Action)
        .def_readwrite("ExtendedAction", &FGearboxCoverTransition::ExtendedAction)
        .def_readonly("Padding", &FGearboxCoverTransition::Padding)
  ;
}
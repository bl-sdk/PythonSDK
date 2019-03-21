#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWillowCoverState()
{
    class_< FWillowCoverState >("FWillowCoverState", no_init)
        .def_readwrite("Action", &FWillowCoverState::Action)
        .def_readwrite("Cover", &FWillowCoverState::Cover)
        .def_readwrite("Stance", &FWillowCoverState::Stance)
  ;
}
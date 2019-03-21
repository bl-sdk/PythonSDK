#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWillowCoverState()
{
    py::class_< FWillowCoverState >("FWillowCoverState")
        .def_readwrite("Action", &FWillowCoverState::Action)
        .def_readwrite("Cover", &FWillowCoverState::Cover)
        .def_readwrite("Stance", &FWillowCoverState::Stance)
  ;
}
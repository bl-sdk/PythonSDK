#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWillowCoverState(py::object m)
{
    py::class_< FWillowCoverState >(m, "FWillowCoverState")
        .def_readwrite("Action", &FWillowCoverState::Action)
        .def_readwrite("Cover", &FWillowCoverState::Cover)
        .def_readwrite("Stance", &FWillowCoverState::Stance)
  ;
}
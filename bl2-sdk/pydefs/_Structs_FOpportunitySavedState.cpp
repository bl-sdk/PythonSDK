#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOpportunitySavedState(py::object m)
{
    py::class_< FOpportunitySavedState >(m, "FOpportunitySavedState")
        .def_readwrite("SelectedSpawnIdx", &FOpportunitySavedState::SelectedSpawnIdx)
        .def_readwrite("NumTotalActors", &FOpportunitySavedState::NumTotalActors)
        .def_readwrite("MaxActiveActors", &FOpportunitySavedState::MaxActiveActors)
        .def_readwrite("NumActiveActors", &FOpportunitySavedState::NumActiveActors)
        .def_readwrite("NextSpawnTime", &FOpportunitySavedState::NextSpawnTime)
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOpportunitySavedState()
{
    class_< FOpportunitySavedState >("FOpportunitySavedState", no_init)
        .def_readwrite("SelectedSpawnIdx", &FOpportunitySavedState::SelectedSpawnIdx)
        .def_readwrite("NumTotalActors", &FOpportunitySavedState::NumTotalActors)
        .def_readwrite("MaxActiveActors", &FOpportunitySavedState::MaxActiveActors)
        .def_readwrite("NumActiveActors", &FOpportunitySavedState::NumActiveActors)
        .def_readwrite("NextSpawnTime", &FOpportunitySavedState::NextSpawnTime)
  ;
}
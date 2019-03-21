#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorActionLinkData()
{
    py::class_< FBehaviorActionLinkData >("FBehaviorActionLinkData")
        .def_readwrite("LinkedBehavior", &FBehaviorActionLinkData::LinkedBehavior)
        .def_readwrite("ActivateDelay", &FBehaviorActionLinkData::ActivateDelay)
  ;
}
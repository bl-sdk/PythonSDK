#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorActionLinkData()
{
    class_< FBehaviorActionLinkData >("FBehaviorActionLinkData", no_init)
        .def_readwrite("LinkedBehavior", &FBehaviorActionLinkData::LinkedBehavior)
        .def_readwrite("ActivateDelay", &FBehaviorActionLinkData::ActivateDelay)
  ;
}
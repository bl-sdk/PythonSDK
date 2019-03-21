#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorOutputLinkData2()
{
    class_< FBehaviorOutputLinkData2 >("FBehaviorOutputLinkData2", no_init)
        .def_readwrite("LinkIdAndLinkedBehavior", &FBehaviorOutputLinkData2::LinkIdAndLinkedBehavior)
        .def_readwrite("ActivateDelay", &FBehaviorOutputLinkData2::ActivateDelay)
  ;
}
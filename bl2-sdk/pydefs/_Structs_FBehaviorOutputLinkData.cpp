#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorOutputLinkData()
{
    class_< FBehaviorOutputLinkData >("FBehaviorOutputLinkData", no_init)
        .def_readwrite("LinkId", &FBehaviorOutputLinkData::LinkId)
        .def_readwrite("LinkedActions", &FBehaviorOutputLinkData::LinkedActions)
  ;
}
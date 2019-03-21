#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorOutputLinkDescriptionData()
{
    class_< FBehaviorOutputLinkDescriptionData >("FBehaviorOutputLinkDescriptionData", no_init)
        .def_readwrite("LinkId", &FBehaviorOutputLinkDescriptionData::LinkId)
  ;
}
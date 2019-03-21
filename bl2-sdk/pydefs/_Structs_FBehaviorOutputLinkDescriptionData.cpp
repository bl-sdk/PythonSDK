#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorOutputLinkDescriptionData()
{
    py::class_< FBehaviorOutputLinkDescriptionData >("FBehaviorOutputLinkDescriptionData")
        .def_readwrite("LinkId", &FBehaviorOutputLinkDescriptionData::LinkId)
  ;
}
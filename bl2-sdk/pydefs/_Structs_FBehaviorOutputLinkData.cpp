#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorOutputLinkData()
{
    py::class_< FBehaviorOutputLinkData >("FBehaviorOutputLinkData")
        .def_readwrite("LinkId", &FBehaviorOutputLinkData::LinkId)
        .def_readwrite("LinkedActions", &FBehaviorOutputLinkData::LinkedActions)
  ;
}
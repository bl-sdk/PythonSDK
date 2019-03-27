#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorOutputLinkData2(py::module &m)
{
    py::class_< FBehaviorOutputLinkData2 >(m, "FBehaviorOutputLinkData2")
        .def_readwrite("LinkIdAndLinkedBehavior", &FBehaviorOutputLinkData2::LinkIdAndLinkedBehavior)
        .def_readwrite("ActivateDelay", &FBehaviorOutputLinkData2::ActivateDelay)
  ;
}
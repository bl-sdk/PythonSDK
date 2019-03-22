#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorOutputLinkData(py::module &m)
{
    py::class_< FBehaviorOutputLinkData >(m, "FBehaviorOutputLinkData")
        .def_readwrite("LinkId", &FBehaviorOutputLinkData::LinkId)
        .def_readwrite("LinkedActions", &FBehaviorOutputLinkData::LinkedActions)
  ;
}
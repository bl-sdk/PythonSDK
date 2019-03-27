#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorOutputLinkDescriptionData(py::module &m)
{
    py::class_< FBehaviorOutputLinkDescriptionData >(m, "FBehaviorOutputLinkDescriptionData")
        .def_readwrite("LinkId", &FBehaviorOutputLinkDescriptionData::LinkId)
  ;
}
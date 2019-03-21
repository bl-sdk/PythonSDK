#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAimAnimTransitionData()
{
    py::class_< FAimAnimTransitionData >("FAimAnimTransitionData")
        .def_readwrite("FromState", &FAimAnimTransitionData::FromState)
        .def_readwrite("ToState", &FAimAnimTransitionData::ToState)
        .def_readwrite("AnimName", &FAimAnimTransitionData::AnimName)
        .def_readwrite("BlendInTime", &FAimAnimTransitionData::BlendInTime)
        .def_readwrite("BlendOutTime", &FAimAnimTransitionData::BlendOutTime)
  ;
}
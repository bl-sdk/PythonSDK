#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAimAnimTransitionData(py::object m)
{
    py::class_< FAimAnimTransitionData >(m, "FAimAnimTransitionData")
        .def_readwrite("FromState", &FAimAnimTransitionData::FromState)
        .def_readwrite("ToState", &FAimAnimTransitionData::ToState)
        .def_readwrite("AnimName", &FAimAnimTransitionData::AnimName)
        .def_readwrite("BlendInTime", &FAimAnimTransitionData::BlendInTime)
        .def_readwrite("BlendOutTime", &FAimAnimTransitionData::BlendOutTime)
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAimAnimTransitionData()
{
    class_< FAimAnimTransitionData >("FAimAnimTransitionData", no_init)
        .def_readwrite("FromState", &FAimAnimTransitionData::FromState)
        .def_readwrite("ToState", &FAimAnimTransitionData::ToState)
        .def_readwrite("AnimName", &FAimAnimTransitionData::AnimName)
        .def_readwrite("BlendInTime", &FAimAnimTransitionData::BlendInTime)
        .def_readwrite("BlendOutTime", &FAimAnimTransitionData::BlendOutTime)
  ;
}
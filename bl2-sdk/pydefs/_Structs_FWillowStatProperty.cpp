#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWillowStatProperty()
{
    class_< FWillowStatProperty >("FWillowStatProperty", no_init)
        .def_readwrite("Id", &FWillowStatProperty::Id)
        .def_readwrite("Data", &FWillowStatProperty::Data)
        .def_readwrite("MaxData", &FWillowStatProperty::MaxData)
        .def_readwrite("ChallengeBaseData", &FWillowStatProperty::ChallengeBaseData)
        .def_readwrite("OnlineId", &FWillowStatProperty::OnlineId)
  ;
}
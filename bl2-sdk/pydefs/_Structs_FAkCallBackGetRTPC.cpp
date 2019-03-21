#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAkCallBackGetRTPC()
{
    class_< FAkCallBackGetRTPC >("FAkCallBackGetRTPC", no_init)
        .def_readwrite("RTPC", &FAkCallBackGetRTPC::RTPC)
        .def_readwrite("Owner", &FAkCallBackGetRTPC::Owner)
        .def_readwrite("Component", &FAkCallBackGetRTPC::Component)
        .def_readwrite("CallbackValue", &FAkCallBackGetRTPC::CallbackValue)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FNetworkChannelData()
{
    py::class_< FNetworkChannelData >("FNetworkChannelData")
        .def_readwrite("ChannelName", &FNetworkChannelData::ChannelName)
        .def_readwrite("StateName", &FNetworkChannelData::StateName)
        .def_readwrite("ActorClass", &FNetworkChannelData::ActorClass)
        .def_readwrite("ActorClassName", &FNetworkChannelData::ActorClassName)
        .def_readwrite("Role", &FNetworkChannelData::Role)
        .def_readwrite("RemoteRole", &FNetworkChannelData::RemoteRole)
        .def_readwrite("ActorClassCount", &FNetworkChannelData::ActorClassCount)
        .def_readwrite("ActorClassPercent", &FNetworkChannelData::ActorClassPercent)
  ;
}
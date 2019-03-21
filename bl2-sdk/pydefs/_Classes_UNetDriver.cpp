#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNetDriver()
{
    class_< UNetDriver, bases< USubsystem >  , boost::noncopyable>("UNetDriver", no_init)
        .def_readonly("UnknownData00", &UNetDriver::UnknownData00)
        .def_readwrite("ConnectionTimeout", &UNetDriver::ConnectionTimeout)
        .def_readwrite("InitialConnectTimeout", &UNetDriver::InitialConnectTimeout)
        .def_readwrite("KeepAliveTime", &UNetDriver::KeepAliveTime)
        .def_readwrite("RelevantTimeout", &UNetDriver::RelevantTimeout)
        .def_readwrite("SpawnPrioritySeconds", &UNetDriver::SpawnPrioritySeconds)
        .def_readwrite("ServerTravelPause", &UNetDriver::ServerTravelPause)
        .def_readwrite("MaxClientRate", &UNetDriver::MaxClientRate)
        .def_readwrite("MaxInternetClientRate", &UNetDriver::MaxInternetClientRate)
        .def_readwrite("NetServerMaxTickRate", &UNetDriver::NetServerMaxTickRate)
        .def_readonly("UnknownData01", &UNetDriver::UnknownData01)
        .def_readwrite("MaxDownloadSize", &UNetDriver::MaxDownloadSize)
        .def_readwrite("DownloadManagers", &UNetDriver::DownloadManagers)
        .def_readonly("UnknownData02", &UNetDriver::UnknownData02)
        .def_readwrite("NetConnectionClassName", &UNetDriver::NetConnectionClassName)
        .def_readonly("UnknownData03", &UNetDriver::UnknownData03)
        .def("StaticClass", &UNetDriver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
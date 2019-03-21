#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UNetDriver(py::object m)
{
    py::class_< UNetDriver,  USubsystem   >(m, "UNetDriver")
        .def_readwrite("ConnectionTimeout", &UNetDriver::ConnectionTimeout)
        .def_readwrite("InitialConnectTimeout", &UNetDriver::InitialConnectTimeout)
        .def_readwrite("KeepAliveTime", &UNetDriver::KeepAliveTime)
        .def_readwrite("RelevantTimeout", &UNetDriver::RelevantTimeout)
        .def_readwrite("SpawnPrioritySeconds", &UNetDriver::SpawnPrioritySeconds)
        .def_readwrite("ServerTravelPause", &UNetDriver::ServerTravelPause)
        .def_readwrite("MaxClientRate", &UNetDriver::MaxClientRate)
        .def_readwrite("MaxInternetClientRate", &UNetDriver::MaxInternetClientRate)
        .def_readwrite("NetServerMaxTickRate", &UNetDriver::NetServerMaxTickRate)
        .def_readwrite("MaxDownloadSize", &UNetDriver::MaxDownloadSize)
        .def_readwrite("DownloadManagers", &UNetDriver::DownloadManagers)
        .def_readwrite("NetConnectionClassName", &UNetDriver::NetConnectionClassName)
        .def("StaticClass", &UNetDriver::StaticClass, py::return_value_policy::reference)
          ;
}
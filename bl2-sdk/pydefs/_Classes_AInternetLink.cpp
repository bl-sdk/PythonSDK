#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AInternetLink(py::object m)
{
    py::class_< AInternetLink,  AInfo   >(m, "AInternetLink")
        .def_readwrite("LinkMode", &AInternetLink::LinkMode)
        .def_readwrite("InLineMode", &AInternetLink::InLineMode)
        .def_readwrite("OutLineMode", &AInternetLink::OutLineMode)
        .def_readwrite("ReceiveMode", &AInternetLink::ReceiveMode)
        .def_readwrite("Socket", &AInternetLink::Socket)
        .def_readwrite("Port", &AInternetLink::Port)
        .def_readwrite("RemoteSocket", &AInternetLink::RemoteSocket)
        .def_readwrite("PrivateResolveInfo", &AInternetLink::PrivateResolveInfo)
        .def_readwrite("DataPending", &AInternetLink::DataPending)
        .def("StaticClass", &AInternetLink::StaticClass, py::return_value_policy::reference)
        .def("eventResolveFailed", &AInternetLink::eventResolveFailed)
        .def("eventResolved", &AInternetLink::eventResolved)
        .def("GetLocalIP", &AInternetLink::GetLocalIP)
        .def("StringToIpAddr", &AInternetLink::StringToIpAddr)
        .def("IpAddrToString", &AInternetLink::IpAddrToString)
        .def("GetLastError", &AInternetLink::GetLastError)
        .def("Resolve", &AInternetLink::Resolve)
        .def("ParseURL", &AInternetLink::ParseURL)
        .def("IsDataPending", &AInternetLink::IsDataPending)
          ;
}
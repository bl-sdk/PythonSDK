#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AInternetLink()
{
    class_< AInternetLink, bases< AInfo >  , boost::noncopyable>("AInternetLink", no_init)
        .def_readwrite("LinkMode", &AInternetLink::LinkMode)
        .def_readwrite("InLineMode", &AInternetLink::InLineMode)
        .def_readwrite("OutLineMode", &AInternetLink::OutLineMode)
        .def_readwrite("ReceiveMode", &AInternetLink::ReceiveMode)
        .def_readwrite("Socket", &AInternetLink::Socket)
        .def_readwrite("Port", &AInternetLink::Port)
        .def_readwrite("RemoteSocket", &AInternetLink::RemoteSocket)
        .def_readwrite("PrivateResolveInfo", &AInternetLink::PrivateResolveInfo)
        .def_readwrite("DataPending", &AInternetLink::DataPending)
        .def("StaticClass", &AInternetLink::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventResolveFailed", &AInternetLink::eventResolveFailed)
        .def("eventResolved", &AInternetLink::eventResolved)
        .def("GetLocalIP", &AInternetLink::GetLocalIP)
        .def("StringToIpAddr", &AInternetLink::StringToIpAddr)
        .def("IpAddrToString", &AInternetLink::IpAddrToString)
        .def("GetLastError", &AInternetLink::GetLastError)
        .def("Resolve", &AInternetLink::Resolve)
        .def("ParseURL", &AInternetLink::ParseURL)
        .def("IsDataPending", &AInternetLink::IsDataPending)
        .staticmethod("StaticClass")
  ;
}
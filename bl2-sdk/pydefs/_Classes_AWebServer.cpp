#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWebServer(py::module &m)
{
    py::class_< AWebServer,  ATcpLink   >(m, "AWebServer")
        .def_readwrite("ServerName", &AWebServer::ServerName)
        .def_readwrite("ListenPort", &AWebServer::ListenPort)
        .def_readwrite("MaxConnections", &AWebServer::MaxConnections)
        .def_readwrite("DefaultApplication", &AWebServer::DefaultApplication)
        .def_readwrite("ExpirationSeconds", &AWebServer::ExpirationSeconds)
        .def_readwrite("ServerURL", &AWebServer::ServerURL)
        .def_readwrite("ConnectionCount", &AWebServer::ConnectionCount)
        .def_readwrite("ConnID", &AWebServer::ConnID)
        .def("StaticClass", &AWebServer::StaticClass, py::return_value_policy::reference)
        .def("GetApplication", &AWebServer::GetApplication, py::return_value_policy::reference)
        .def("eventLostChild", &AWebServer::eventLostChild)
        .def("eventGainedChild", &AWebServer::eventGainedChild)
        .def("eventDestroyed", &AWebServer::eventDestroyed)
        .def("PostBeginPlay", &AWebServer::PostBeginPlay)
          ;
}
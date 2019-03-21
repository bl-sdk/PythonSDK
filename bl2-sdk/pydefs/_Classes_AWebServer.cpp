#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWebServer()
{
    class_< AWebServer, bases< ATcpLink >  , boost::noncopyable>("AWebServer", no_init)
        .def_readwrite("ServerName", &AWebServer::ServerName)
        .def_readonly("Applications", &AWebServer::Applications)
        .def_readonly("ApplicationPaths", &AWebServer::ApplicationPaths)
        .def_readwrite("ListenPort", &AWebServer::ListenPort)
        .def_readwrite("MaxConnections", &AWebServer::MaxConnections)
        .def_readwrite("DefaultApplication", &AWebServer::DefaultApplication)
        .def_readwrite("ExpirationSeconds", &AWebServer::ExpirationSeconds)
        .def_readwrite("ServerURL", &AWebServer::ServerURL)
        .def_readonly("ApplicationObjects", &AWebServer::ApplicationObjects)
        .def_readwrite("ConnectionCount", &AWebServer::ConnectionCount)
        .def_readwrite("ConnID", &AWebServer::ConnID)
        .def("StaticClass", &AWebServer::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetApplication", &AWebServer::GetApplication, return_value_policy< reference_existing_object >())
        .def("eventLostChild", &AWebServer::eventLostChild)
        .def("eventGainedChild", &AWebServer::eventGainedChild)
        .def("eventDestroyed", &AWebServer::eventDestroyed)
        .def("PostBeginPlay", &AWebServer::PostBeginPlay)
        .staticmethod("StaticClass")
  ;
}
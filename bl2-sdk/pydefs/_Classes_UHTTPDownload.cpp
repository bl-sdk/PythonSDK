#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UHTTPDownload()
{
    class_< UHTTPDownload, bases< UDownload >  , boost::noncopyable>("UHTTPDownload", no_init)
        .def_readwrite("ProxyServerHost", &UHTTPDownload::ProxyServerHost)
        .def_readwrite("ProxyServerPort", &UHTTPDownload::ProxyServerPort)
        .def_readwrite("ConnectionTimeout", &UHTTPDownload::ConnectionTimeout)
        .def_readonly("UnknownData00", &UHTTPDownload::UnknownData00)
        .def("StaticClass", &UHTTPDownload::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
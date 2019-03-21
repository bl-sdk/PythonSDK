#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UHTTPDownload(py::object m)
{
    py::class_< UHTTPDownload,  UDownload   >(m, "UHTTPDownload")
        .def_readwrite("ProxyServerHost", &UHTTPDownload::ProxyServerHost)
        .def_readwrite("ProxyServerPort", &UHTTPDownload::ProxyServerPort)
        .def_readwrite("ConnectionTimeout", &UHTTPDownload::ConnectionTimeout)
        .def_readonly("UnknownData00", &UHTTPDownload::UnknownData00)
        .def("StaticClass", &UHTTPDownload::StaticClass, py::return_value_policy::reference)
          ;
}
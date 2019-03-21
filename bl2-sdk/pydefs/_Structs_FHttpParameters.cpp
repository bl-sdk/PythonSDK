#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHttpParameters(py::object m)
{
    py::class_< FHttpParameters >(m, "FHttpParameters")
        .def_readwrite("ServiceConfiguration", &FHttpParameters::ServiceConfiguration)
        .def_readwrite("SubService", &FHttpParameters::SubService)
        .def_readwrite("ContentType", &FHttpParameters::ContentType)
        .def_readwrite("CustomContentType", &FHttpParameters::CustomContentType)
        .def_readwrite("AcceptsType", &FHttpParameters::AcceptsType)
        .def_readwrite("CustomAcceptsType", &FHttpParameters::CustomAcceptsType)
        .def_readwrite("Method", &FHttpParameters::Method)
  ;
}
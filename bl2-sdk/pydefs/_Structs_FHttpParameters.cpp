#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHttpParameters()
{
    class_< FHttpParameters >("FHttpParameters", no_init)
        .def_readwrite("ServiceConfiguration", &FHttpParameters::ServiceConfiguration)
        .def_readwrite("SubService", &FHttpParameters::SubService)
        .def_readwrite("ContentType", &FHttpParameters::ContentType)
        .def_readwrite("CustomContentType", &FHttpParameters::CustomContentType)
        .def_readwrite("AcceptsType", &FHttpParameters::AcceptsType)
        .def_readwrite("CustomAcceptsType", &FHttpParameters::CustomAcceptsType)
        .def_readwrite("Method", &FHttpParameters::Method)
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAsyncDataRequest()
{
    class_< FAsyncDataRequest >("FAsyncDataRequest", no_init)
        .def_readwrite("RequestType", &FAsyncDataRequest::RequestType)
        .def_readwrite("ObjectPath", &FAsyncDataRequest::ObjectPath)
        .def_readwrite("Instigator", &FAsyncDataRequest::Instigator)
        .def_readwrite("PlayerContext", &FAsyncDataRequest::PlayerContext)
        .def_readwrite("Payload", &FAsyncDataRequest::Payload)
        .def_readwrite("CallbackEventName", &FAsyncDataRequest::CallbackEventName)
        .def_readwrite("IntParam", &FAsyncDataRequest::IntParam)
        .def_readwrite("FloatParam", &FAsyncDataRequest::FloatParam)
  ;
}
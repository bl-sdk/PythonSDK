#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAsyncDataRequest(py::object m)
{
    py::class_< FAsyncDataRequest >(m, "FAsyncDataRequest")
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
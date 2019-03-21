#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSparkOutstandingRequest(py::object m)
{
    py::class_< FSparkOutstandingRequest >(m, "FSparkOutstandingRequest")
        .def_readwrite("State", &FSparkOutstandingRequest::State)
        .def_readwrite("SleepUntil", &FSparkOutstandingRequest::SleepUntil)
        .def_readwrite("RequestCompleteDelegate", &FSparkOutstandingRequest::RequestCompleteDelegate)
        .def_readwrite("RequestIdentifier", &FSparkOutstandingRequest::RequestIdentifier)
        .def_readwrite("SparkUpdateCallback", &FSparkOutstandingRequest::SparkUpdateCallback)
        .def_readwrite("HttpRequest", &FSparkOutstandingRequest::HttpRequest)
        .def_readwrite("RequestBody", &FSparkOutstandingRequest::RequestBody)
        .def_readwrite("ResponseBody", &FSparkOutstandingRequest::ResponseBody)
        .def_readwrite("RetryNumber", &FSparkOutstandingRequest::RetryNumber)
        .def_readwrite("BaseRetryIntervalSeconds", &FSparkOutstandingRequest::BaseRetryIntervalSeconds)
        .def_readwrite("MaxRetryAttempts", &FSparkOutstandingRequest::MaxRetryAttempts)
        .def_readwrite("RetryMultiplier", &FSparkOutstandingRequest::RetryMultiplier)
        .def_readwrite("RetryJitter", &FSparkOutstandingRequest::RetryJitter)
        .def_readwrite("HttpTimeout", &FSparkOutstandingRequest::HttpTimeout)
        .def_readwrite("ReadBufferSize", &FSparkOutstandingRequest::ReadBufferSize)
        .def_readwrite("Accept", &FSparkOutstandingRequest::Accept)
        .def_readwrite("ContentType", &FSparkOutstandingRequest::ContentType)
        .def_readwrite("Method", &FSparkOutstandingRequest::Method)
        .def_readwrite("URL", &FSparkOutstandingRequest::URL)
        .def_readwrite("RequestStartTime", &FSparkOutstandingRequest::RequestStartTime)
  ;
}
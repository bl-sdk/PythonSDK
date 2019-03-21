#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FServerAuthRetry()
{
    py::class_< FServerAuthRetry >("FServerAuthRetry")
        .def_readwrite("ClientUID", &FServerAuthRetry::ClientUID)
        .def_readwrite("AuthRetryCount", &FServerAuthRetry::AuthRetryCount)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FServerAuthRetry(py::module &m)
{
    py::class_< FServerAuthRetry >(m, "FServerAuthRetry")
        .def_readwrite("ClientUID", &FServerAuthRetry::ClientUID)
        .def_readwrite("AuthRetryCount", &FServerAuthRetry::AuthRetryCount)
  ;
}
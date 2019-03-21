#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPendingClientAuth(py::object m)
{
    py::class_< FPendingClientAuth >(m, "FPendingClientAuth")
        .def_readwrite("ClientConnection", &FPendingClientAuth::ClientConnection)
        .def_readwrite("ClientUID", &FPendingClientAuth::ClientUID)
        .def_readwrite("AuthTimestamp", &FPendingClientAuth::AuthTimestamp)
        .def_readwrite("AuthRetryCount", &FPendingClientAuth::AuthRetryCount)
  ;
}
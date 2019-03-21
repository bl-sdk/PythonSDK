#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPendingClientAuth()
{
    class_< FPendingClientAuth >("FPendingClientAuth", no_init)
        .def_readwrite("ClientConnection", &FPendingClientAuth::ClientConnection)
        .def_readwrite("ClientUID", &FPendingClientAuth::ClientUID)
        .def_readwrite("AuthTimestamp", &FPendingClientAuth::AuthTimestamp)
        .def_readwrite("AuthRetryCount", &FPendingClientAuth::AuthRetryCount)
  ;
}
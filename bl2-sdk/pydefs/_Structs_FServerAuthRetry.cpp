#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FServerAuthRetry()
{
    class_< FServerAuthRetry >("FServerAuthRetry", no_init)
        .def_readwrite("ClientUID", &FServerAuthRetry::ClientUID)
        .def_readwrite("AuthRetryCount", &FServerAuthRetry::AuthRetryCount)
  ;
}
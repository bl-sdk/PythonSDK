#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FServiceResult()
{
    class_< FServiceResult >("FServiceResult", no_init)
        .def_readwrite("ServiceName", &FServiceResult::ServiceName)
        .def_readwrite("ConfigurationGroup", &FServiceResult::ConfigurationGroup)
        .def_readwrite("Parameters", &FServiceResult::Parameters)
  ;
}
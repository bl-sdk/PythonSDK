#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSparkResult()
{
    class_< FSparkResult >("FSparkResult", no_init)
        .def_readwrite("ErrorCode", &FSparkResult::ErrorCode)
        .def_readwrite("HttpStatusCode", &FSparkResult::HttpStatusCode)
        .def_readwrite("ResponseBody", &FSparkResult::ResponseBody)
  ;
}
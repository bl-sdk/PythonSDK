#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FServerQueryToPingResponseMapping()
{
    class_< FServerQueryToPingResponseMapping >("FServerQueryToPingResponseMapping", no_init)
        .def_readwrite("Query", &FServerQueryToPingResponseMapping::Query)
        .def_readwrite("Response", &FServerQueryToPingResponseMapping::Response)
  ;
}
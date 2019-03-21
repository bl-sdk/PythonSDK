#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FServerQueryToRulesResponseMapping()
{
    class_< FServerQueryToRulesResponseMapping >("FServerQueryToRulesResponseMapping", no_init)
        .def_readwrite("Query", &FServerQueryToRulesResponseMapping::Query)
        .def_readwrite("Response", &FServerQueryToRulesResponseMapping::Response)
  ;
}
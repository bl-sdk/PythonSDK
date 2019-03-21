#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FServerQueryToRulesResponseMapping()
{
    py::class_< FServerQueryToRulesResponseMapping >("FServerQueryToRulesResponseMapping")
        .def_readwrite("Query", &FServerQueryToRulesResponseMapping::Query)
        .def_readwrite("Response", &FServerQueryToRulesResponseMapping::Response)
  ;
}
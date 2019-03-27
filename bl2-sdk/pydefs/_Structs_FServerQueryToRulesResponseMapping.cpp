#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FServerQueryToRulesResponseMapping(py::module &m)
{
    py::class_< FServerQueryToRulesResponseMapping >(m, "FServerQueryToRulesResponseMapping")
        .def_readwrite("Query", &FServerQueryToRulesResponseMapping::Query)
        .def_readwrite("Response", &FServerQueryToRulesResponseMapping::Response)
  ;
}
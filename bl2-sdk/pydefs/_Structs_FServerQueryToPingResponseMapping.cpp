#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FServerQueryToPingResponseMapping(py::object m)
{
    py::class_< FServerQueryToPingResponseMapping >(m, "FServerQueryToPingResponseMapping")
        .def_readwrite("Query", &FServerQueryToPingResponseMapping::Query)
        .def_readwrite("Response", &FServerQueryToPingResponseMapping::Response)
  ;
}
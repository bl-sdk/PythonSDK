#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FServerQueryToPingResponseMapping()
{
    py::class_< FServerQueryToPingResponseMapping >("FServerQueryToPingResponseMapping")
        .def_readwrite("Query", &FServerQueryToPingResponseMapping::Query)
        .def_readwrite("Response", &FServerQueryToPingResponseMapping::Response)
  ;
}
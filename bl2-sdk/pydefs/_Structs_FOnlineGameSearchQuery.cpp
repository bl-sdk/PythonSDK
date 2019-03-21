#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineGameSearchQuery(py::object m)
{
    py::class_< FOnlineGameSearchQuery >(m, "FOnlineGameSearchQuery")
        .def_readwrite("OrClauses", &FOnlineGameSearchQuery::OrClauses)
        .def_readwrite("SortClauses", &FOnlineGameSearchQuery::SortClauses)
  ;
}
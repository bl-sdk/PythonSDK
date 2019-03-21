#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineGameSearchQuery()
{
    py::class_< FOnlineGameSearchQuery >("FOnlineGameSearchQuery")
        .def_readwrite("OrClauses", &FOnlineGameSearchQuery::OrClauses)
        .def_readwrite("SortClauses", &FOnlineGameSearchQuery::SortClauses)
  ;
}
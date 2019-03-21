#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineGameSearchORClause()
{
    py::class_< FOnlineGameSearchORClause >("FOnlineGameSearchORClause")
        .def_readwrite("OrParams", &FOnlineGameSearchORClause::OrParams)
  ;
}
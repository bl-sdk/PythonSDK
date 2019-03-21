#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlineGameSearchORClause(py::object m)
{
    py::class_< FOnlineGameSearchORClause >(m, "FOnlineGameSearchORClause")
        .def_readwrite("OrParams", &FOnlineGameSearchORClause::OrParams)
  ;
}
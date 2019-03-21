#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FClientFilterORClause()
{
    py::class_< FClientFilterORClause >("FClientFilterORClause")
        .def_readwrite("OrParams", &FClientFilterORClause::OrParams)
  ;
}
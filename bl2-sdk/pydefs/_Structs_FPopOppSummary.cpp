#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopOppSummary()
{
    py::class_< FPopOppSummary >("FPopOppSummary")
        .def_readwrite("Summary", &FPopOppSummary::Summary)
        .def_readwrite("Count", &FPopOppSummary::Count)
  ;
}
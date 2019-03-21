#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopOppSummary(py::object m)
{
    py::class_< FPopOppSummary >(m, "FPopOppSummary")
        .def_readwrite("Summary", &FPopOppSummary::Summary)
        .def_readwrite("Count", &FPopOppSummary::Count)
  ;
}
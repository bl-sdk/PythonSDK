#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAutomatedTestingDatum(py::object m)
{
    py::class_< FAutomatedTestingDatum >(m, "FAutomatedTestingDatum")
        .def_readwrite("NumberOfMatchesPlayed", &FAutomatedTestingDatum::NumberOfMatchesPlayed)
        .def_readwrite("NumMapListCyclesDone", &FAutomatedTestingDatum::NumMapListCyclesDone)
  ;
}
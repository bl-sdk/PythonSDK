#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAutomatedTestingDatum()
{
    py::class_< FAutomatedTestingDatum >("FAutomatedTestingDatum")
        .def_readwrite("NumberOfMatchesPlayed", &FAutomatedTestingDatum::NumberOfMatchesPlayed)
        .def_readwrite("NumMapListCyclesDone", &FAutomatedTestingDatum::NumMapListCyclesDone)
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAutomatedTestingDatum()
{
    class_< FAutomatedTestingDatum >("FAutomatedTestingDatum", no_init)
        .def_readwrite("NumberOfMatchesPlayed", &FAutomatedTestingDatum::NumberOfMatchesPlayed)
        .def_readwrite("NumMapListCyclesDone", &FAutomatedTestingDatum::NumMapListCyclesDone)
  ;
}
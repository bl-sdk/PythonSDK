#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSlaughterMissionChain()
{
    py::class_< FSlaughterMissionChain >("FSlaughterMissionChain")
        .def_readwrite("SlaughterMissions", &FSlaughterMissionChain::SlaughterMissions)
  ;
}
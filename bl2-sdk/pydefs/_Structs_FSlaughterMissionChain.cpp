#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSlaughterMissionChain(py::module &m)
{
    py::class_< FSlaughterMissionChain >(m, "FSlaughterMissionChain")
        .def_readwrite("SlaughterMissions", &FSlaughterMissionChain::SlaughterMissions)
  ;
}
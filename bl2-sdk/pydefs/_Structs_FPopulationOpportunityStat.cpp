#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationOpportunityStat()
{
    py::class_< FPopulationOpportunityStat >("FPopulationOpportunityStat")
        .def_readwrite("PercentNodeReduction", &FPopulationOpportunityStat::PercentNodeReduction)
  ;
}
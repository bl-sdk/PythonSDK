#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationOpportunityStat(py::module &m)
{
    py::class_< FPopulationOpportunityStat >(m, "FPopulationOpportunityStat")
        .def_readwrite("PercentNodeReduction", &FPopulationOpportunityStat::PercentNodeReduction)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDefendTargetData(py::module &m)
{
    py::class_< FDefendTargetData >(m, "FDefendTargetData")
        .def_readwrite("Objective", &FDefendTargetData::Objective)
        .def_readwrite("PercentHealth", &FDefendTargetData::PercentHealth)
  ;
}
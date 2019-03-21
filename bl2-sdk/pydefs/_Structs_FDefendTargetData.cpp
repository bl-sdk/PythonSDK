#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDefendTargetData()
{
    py::class_< FDefendTargetData >("FDefendTargetData")
        .def_readwrite("Objective", &FDefendTargetData::Objective)
        .def_readwrite("PercentHealth", &FDefendTargetData::PercentHealth)
  ;
}
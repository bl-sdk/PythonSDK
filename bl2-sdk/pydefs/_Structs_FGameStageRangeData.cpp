#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameStageRangeData(py::module &m)
{
    py::class_< FGameStageRangeData >(m, "FGameStageRangeData")
        .def_readwrite("MinGameStage", &FGameStageRangeData::MinGameStage)
        .def_readwrite("MaxGameStage", &FGameStageRangeData::MaxGameStage)
  ;
}
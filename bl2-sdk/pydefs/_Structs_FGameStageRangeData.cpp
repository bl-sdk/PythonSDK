#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGameStageRangeData()
{
    py::class_< FGameStageRangeData >("FGameStageRangeData")
        .def_readwrite("MinGameStage", &FGameStageRangeData::MinGameStage)
        .def_readwrite("MaxGameStage", &FGameStageRangeData::MaxGameStage)
  ;
}
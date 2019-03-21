#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRegionGameStageData()
{
    py::class_< FRegionGameStageData >("FRegionGameStageData")
        .def_readwrite("RegionDef", &FRegionGameStageData::RegionDef)
        .def_readwrite("GameStage", &FRegionGameStageData::GameStage)
        .def_readwrite("PlaythroughIdx", &FRegionGameStageData::PlaythroughIdx)
  ;
}
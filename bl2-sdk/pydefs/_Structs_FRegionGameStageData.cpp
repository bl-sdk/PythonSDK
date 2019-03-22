#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRegionGameStageData(py::module &m)
{
    py::class_< FRegionGameStageData >(m, "FRegionGameStageData")
        .def_readwrite("RegionDef", &FRegionGameStageData::RegionDef)
        .def_readwrite("GameStage", &FRegionGameStageData::GameStage)
        .def_readwrite("PlaythroughIdx", &FRegionGameStageData::PlaythroughIdx)
  ;
}
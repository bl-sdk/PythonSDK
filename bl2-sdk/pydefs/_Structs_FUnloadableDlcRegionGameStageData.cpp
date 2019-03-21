#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUnloadableDlcRegionGameStageData(py::object m)
{
    py::class_< FUnloadableDlcRegionGameStageData >(m, "FUnloadableDlcRegionGameStageData")
        .def_readwrite("RegionDefName", &FUnloadableDlcRegionGameStageData::RegionDefName)
        .def_readwrite("GameStage", &FUnloadableDlcRegionGameStageData::GameStage)
        .def_readwrite("PlaythroughIdx", &FUnloadableDlcRegionGameStageData::PlaythroughIdx)
        .def_readwrite("DlcPackageId", &FUnloadableDlcRegionGameStageData::DlcPackageId)
  ;
}
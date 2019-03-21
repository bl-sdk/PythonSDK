#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUnloadableDlcRegionGameStageData()
{
    class_< FUnloadableDlcRegionGameStageData >("FUnloadableDlcRegionGameStageData", no_init)
        .def_readwrite("RegionDefName", &FUnloadableDlcRegionGameStageData::RegionDefName)
        .def_readwrite("GameStage", &FUnloadableDlcRegionGameStageData::GameStage)
        .def_readwrite("PlaythroughIdx", &FUnloadableDlcRegionGameStageData::PlaythroughIdx)
        .def_readwrite("DlcPackageId", &FUnloadableDlcRegionGameStageData::DlcPackageId)
  ;
}
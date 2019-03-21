#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRegionGameStageData()
{
    class_< FRegionGameStageData >("FRegionGameStageData", no_init)
        .def_readwrite("RegionDef", &FRegionGameStageData::RegionDef)
        .def_readwrite("GameStage", &FRegionGameStageData::GameStage)
        .def_readwrite("PlaythroughIdx", &FRegionGameStageData::PlaythroughIdx)
  ;
}
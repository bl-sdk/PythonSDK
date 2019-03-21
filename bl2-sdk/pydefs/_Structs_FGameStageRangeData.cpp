#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGameStageRangeData()
{
    class_< FGameStageRangeData >("FGameStageRangeData", no_init)
        .def_readwrite("MinGameStage", &FGameStageRangeData::MinGameStage)
        .def_readwrite("MaxGameStage", &FGameStageRangeData::MaxGameStage)
  ;
}
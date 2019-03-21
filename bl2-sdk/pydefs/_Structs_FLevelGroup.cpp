#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLevelGroup()
{
    class_< FLevelGroup >("FLevelGroup", no_init)
        .def_readwrite("GroupColor", &FLevelGroup::GroupColor)
        .def_readwrite("Levels", &FLevelGroup::Levels)
        .def_readwrite("LevelGridVolumes", &FLevelGroup::LevelGridVolumes)
        .def_readwrite("GroupName", &FLevelGroup::GroupName)
  ;
}
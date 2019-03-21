#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLevelStateRecord()
{
    class_< FLevelStateRecord >("FLevelStateRecord", no_init)
        .def_readwrite("LevelName", &FLevelStateRecord::LevelName)
        .def_readwrite("LevelLoaded", &FLevelStateRecord::LevelLoaded)
        .def_readwrite("ObjectKeys", &FLevelStateRecord::ObjectKeys)
  ;
}
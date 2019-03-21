#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelStateRecord()
{
    py::class_< FLevelStateRecord >("FLevelStateRecord")
        .def_readwrite("LevelName", &FLevelStateRecord::LevelName)
        .def_readwrite("LevelLoaded", &FLevelStateRecord::LevelLoaded)
        .def_readwrite("ObjectKeys", &FLevelStateRecord::ObjectKeys)
  ;
}
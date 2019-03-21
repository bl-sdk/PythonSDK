#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelStreamingNameCombo()
{
    py::class_< FLevelStreamingNameCombo >("FLevelStreamingNameCombo")
        .def_readwrite("Level", &FLevelStreamingNameCombo::Level)
        .def_readwrite("LevelName", &FLevelStreamingNameCombo::LevelName)
  ;
}
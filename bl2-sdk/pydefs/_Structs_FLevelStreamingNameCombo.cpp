#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLevelStreamingNameCombo()
{
    class_< FLevelStreamingNameCombo >("FLevelStreamingNameCombo", no_init)
        .def_readwrite("Level", &FLevelStreamingNameCombo::Level)
        .def_readwrite("LevelName", &FLevelStreamingNameCombo::LevelName)
  ;
}
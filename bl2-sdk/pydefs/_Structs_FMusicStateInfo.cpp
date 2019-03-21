#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMusicStateInfo()
{
    py::class_< FMusicStateInfo >("FMusicStateInfo")
        .def_readwrite("State", &FMusicStateInfo::State)
        .def_readwrite("CustomCombatMusicAkState", &FMusicStateInfo::CustomCombatMusicAkState)
        .def_readwrite("CustomAmbientMusicAkState", &FMusicStateInfo::CustomAmbientMusicAkState)
  ;
}
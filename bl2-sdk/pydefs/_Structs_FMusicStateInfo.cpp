#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMusicStateInfo()
{
    class_< FMusicStateInfo >("FMusicStateInfo", no_init)
        .def_readwrite("State", &FMusicStateInfo::State)
        .def_readwrite("CustomCombatMusicAkState", &FMusicStateInfo::CustomCombatMusicAkState)
        .def_readwrite("CustomAmbientMusicAkState", &FMusicStateInfo::CustomAmbientMusicAkState)
  ;
}
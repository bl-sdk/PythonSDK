#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMusicStateInfo(py::module &m)
{
    py::class_< FMusicStateInfo >(m, "FMusicStateInfo")
        .def_readwrite("State", &FMusicStateInfo::State)
        .def_readwrite("CustomCombatMusicAkState", &FMusicStateInfo::CustomCombatMusicAkState)
        .def_readwrite("CustomAmbientMusicAkState", &FMusicStateInfo::CustomAmbientMusicAkState)
  ;
}
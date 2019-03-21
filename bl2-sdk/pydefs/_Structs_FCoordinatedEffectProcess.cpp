#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoordinatedEffectProcess()
{
    py::class_< FCoordinatedEffectProcess >("FCoordinatedEffectProcess")
        .def_readwrite("Target", &FCoordinatedEffectProcess::Target)
        .def_readwrite("Threads", &FCoordinatedEffectProcess::Threads)
        .def_readwrite("Player0MatIndex", &FCoordinatedEffectProcess::Player0MatIndex)
        .def_readwrite("Player1MatIndex", &FCoordinatedEffectProcess::Player1MatIndex)
  ;
}
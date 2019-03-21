#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoordinatedEffectProcess()
{
    class_< FCoordinatedEffectProcess >("FCoordinatedEffectProcess", no_init)
        .def_readwrite("Target", &FCoordinatedEffectProcess::Target)
        .def_readwrite("Threads", &FCoordinatedEffectProcess::Threads)
        .def_readwrite("Player0MatIndex", &FCoordinatedEffectProcess::Player0MatIndex)
        .def_readwrite("Player1MatIndex", &FCoordinatedEffectProcess::Player1MatIndex)
  ;
}
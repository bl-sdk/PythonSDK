#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCoordinatedEffectIndices()
{
    class_< FCoordinatedEffectIndices >("FCoordinatedEffectIndices", no_init)
        .def_readwrite("StartingIndex", &FCoordinatedEffectIndices::StartingIndex)
        .def_readwrite("EndingIndex", &FCoordinatedEffectIndices::EndingIndex)
  ;
}
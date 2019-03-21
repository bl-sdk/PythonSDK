#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDOFEffectModifierData()
{
    class_< FDOFEffectModifierData >("FDOFEffectModifierData", no_init)
        .def_readwrite("RecalculateFocusDistanceRate", &FDOFEffectModifierData::RecalculateFocusDistanceRate)
        .def_readwrite("FocusDistanceLerpRate", &FDOFEffectModifierData::FocusDistanceLerpRate)
  ;
}
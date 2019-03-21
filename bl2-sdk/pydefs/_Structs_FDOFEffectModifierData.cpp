#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDOFEffectModifierData()
{
    py::class_< FDOFEffectModifierData >("FDOFEffectModifierData")
        .def_readwrite("RecalculateFocusDistanceRate", &FDOFEffectModifierData::RecalculateFocusDistanceRate)
        .def_readwrite("FocusDistanceLerpRate", &FDOFEffectModifierData::FocusDistanceLerpRate)
  ;
}
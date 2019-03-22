#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDOFEffectModifierData(py::module &m)
{
    py::class_< FDOFEffectModifierData >(m, "FDOFEffectModifierData")
        .def_readwrite("RecalculateFocusDistanceRate", &FDOFEffectModifierData::RecalculateFocusDistanceRate)
        .def_readwrite("FocusDistanceLerpRate", &FDOFEffectModifierData::FocusDistanceLerpRate)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWheelSlipModifierData()
{
    py::class_< FWheelSlipModifierData >("FWheelSlipModifierData")
        .def_readwrite("LongSlipFactor", &FWheelSlipModifierData::LongSlipFactor)
        .def_readwrite("LatSlipFactor", &FWheelSlipModifierData::LatSlipFactor)
  ;
}
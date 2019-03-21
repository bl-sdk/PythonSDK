#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWheelSlipModifierData()
{
    class_< FWheelSlipModifierData >("FWheelSlipModifierData", no_init)
        .def_readwrite("LongSlipFactor", &FWheelSlipModifierData::LongSlipFactor)
        .def_readwrite("LatSlipFactor", &FWheelSlipModifierData::LatSlipFactor)
  ;
}
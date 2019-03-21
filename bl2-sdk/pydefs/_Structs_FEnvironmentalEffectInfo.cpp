#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEnvironmentalEffectInfo()
{
    py::class_< FEnvironmentalEffectInfo >("FEnvironmentalEffectInfo")
        .def_readwrite("EffectID", &FEnvironmentalEffectInfo::EffectID)
        .def_readwrite("Volume", &FEnvironmentalEffectInfo::Volume)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FEnvironmentalEffectInfo(py::object m)
{
    py::class_< FEnvironmentalEffectInfo >(m, "FEnvironmentalEffectInfo")
        .def_readwrite("EffectID", &FEnvironmentalEffectInfo::EffectID)
        .def_readwrite("Volume", &FEnvironmentalEffectInfo::Volume)
  ;
}
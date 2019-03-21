#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAkEnvironmentalEffectProvider()
{
    py::class_< UIAkEnvironmentalEffectProvider,  UInterface   >("UIAkEnvironmentalEffectProvider")
        .def("StaticClass", &UIAkEnvironmentalEffectProvider::StaticClass, py::return_value_policy::reference)
        .def("GetEnvironmentalEffectsForLocation", &UIAkEnvironmentalEffectProvider::GetEnvironmentalEffectsForLocation)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FShadowRelevanceSizePair()
{
    py::class_< FShadowRelevanceSizePair >("FShadowRelevanceSizePair")
        .def_readwrite("Size", &FShadowRelevanceSizePair::Size)
        .def_readwrite("DynamicShadowCastRelevance", &FShadowRelevanceSizePair::DynamicShadowCastRelevance)
        .def_readwrite("OverrideStaticShadowSettings", &FShadowRelevanceSizePair::OverrideStaticShadowSettings)
  ;
}
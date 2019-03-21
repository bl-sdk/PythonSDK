#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FShadowRelevanceSizePair(py::object m)
{
    py::class_< FShadowRelevanceSizePair >(m, "FShadowRelevanceSizePair")
        .def_readwrite("Size", &FShadowRelevanceSizePair::Size)
        .def_readwrite("DynamicShadowCastRelevance", &FShadowRelevanceSizePair::DynamicShadowCastRelevance)
        .def_readwrite("OverrideStaticShadowSettings", &FShadowRelevanceSizePair::OverrideStaticShadowSettings)
  ;
}
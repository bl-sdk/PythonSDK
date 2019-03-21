#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FShadowRelevanceSizePair()
{
    class_< FShadowRelevanceSizePair >("FShadowRelevanceSizePair", no_init)
        .def_readwrite("Size", &FShadowRelevanceSizePair::Size)
        .def_readwrite("DynamicShadowCastRelevance", &FShadowRelevanceSizePair::DynamicShadowCastRelevance)
        .def_readwrite("OverrideStaticShadowSettings", &FShadowRelevanceSizePair::OverrideStaticShadowSettings)
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDominantShadowInfo()
{
    class_< FDominantShadowInfo >("FDominantShadowInfo", no_init)
        .def_readwrite("WorldToLight", &FDominantShadowInfo::WorldToLight)
        .def_readwrite("LightToWorld", &FDominantShadowInfo::LightToWorld)
        .def_readwrite("LightSpaceImportanceBounds", &FDominantShadowInfo::LightSpaceImportanceBounds)
        .def_readwrite("ShadowMapSizeX", &FDominantShadowInfo::ShadowMapSizeX)
        .def_readwrite("ShadowMapSizeY", &FDominantShadowInfo::ShadowMapSizeY)
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamageSurfaceTypeModifier()
{
    class_< FDamageSurfaceTypeModifier >("FDamageSurfaceTypeModifier", no_init)
        .def_readwrite("SurfaceType", &FDamageSurfaceTypeModifier::SurfaceType)
        .def_readwrite("BaseChance", &FDamageSurfaceTypeModifier::BaseChance)
        .def_readwrite("BaseSpreadChance", &FDamageSurfaceTypeModifier::BaseSpreadChance)
        .def_readwrite("SpreadChanceDecayMultiplier", &FDamageSurfaceTypeModifier::SpreadChanceDecayMultiplier)
  ;
}
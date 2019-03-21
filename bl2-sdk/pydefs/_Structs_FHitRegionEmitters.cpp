#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHitRegionEmitters()
{
    class_< FHitRegionEmitters >("FHitRegionEmitters", no_init)
        .def_readwrite("Emitters", &FHitRegionEmitters::Emitters)
        .def_readwrite("HitRegion", &FHitRegionEmitters::HitRegion)
        .def_readwrite("TimeWaitingToDie", &FHitRegionEmitters::TimeWaitingToDie)
  ;
}
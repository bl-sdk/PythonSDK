#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHitRegionEmitters()
{
    py::class_< FHitRegionEmitters >("FHitRegionEmitters")
        .def_readwrite("Emitters", &FHitRegionEmitters::Emitters)
        .def_readwrite("HitRegion", &FHitRegionEmitters::HitRegion)
        .def_readwrite("TimeWaitingToDie", &FHitRegionEmitters::TimeWaitingToDie)
  ;
}
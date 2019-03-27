#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHitRegionEmitters(py::module &m)
{
    py::class_< FHitRegionEmitters >(m, "FHitRegionEmitters")
        .def_readwrite("Emitters", &FHitRegionEmitters::Emitters)
        .def_readwrite("HitRegion", &FHitRegionEmitters::HitRegion)
        .def_readwrite("TimeWaitingToDie", &FHitRegionEmitters::TimeWaitingToDie)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHitActorData()
{
    py::class_< FHitActorData >("FHitActorData")
        .def_readwrite("HitActor", &FHitActorData::HitActor)
        .def_readwrite("HitInfo", &FHitActorData::HitInfo)
        .def_readwrite("HitLocation", &FHitActorData::HitLocation)
        .def_readwrite("HitLocationRelativeToHitActor", &FHitActorData::HitLocationRelativeToHitActor)
        .def_readwrite("HitNormal", &FHitActorData::HitNormal)
  ;
}
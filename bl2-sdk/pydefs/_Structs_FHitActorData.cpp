#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHitActorData()
{
    class_< FHitActorData >("FHitActorData", no_init)
        .def_readwrite("HitActor", &FHitActorData::HitActor)
        .def_readwrite("HitInfo", &FHitActorData::HitInfo)
        .def_readwrite("HitLocation", &FHitActorData::HitLocation)
        .def_readwrite("HitLocationRelativeToHitActor", &FHitActorData::HitLocationRelativeToHitActor)
        .def_readwrite("HitNormal", &FHitActorData::HitNormal)
  ;
}
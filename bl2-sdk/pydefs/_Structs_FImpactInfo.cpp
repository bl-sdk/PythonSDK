#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FImpactInfo()
{
    class_< FImpactInfo >("FImpactInfo", no_init)
        .def_readwrite("HitActor", &FImpactInfo::HitActor)
        .def_readwrite("HitLocation", &FImpactInfo::HitLocation)
        .def_readwrite("HitNormal", &FImpactInfo::HitNormal)
        .def_readwrite("RayDir", &FImpactInfo::RayDir)
        .def_readwrite("StartTrace", &FImpactInfo::StartTrace)
        .def_readwrite("HitInfo", &FImpactInfo::HitInfo)
        .def_readwrite("EndTrace", &FImpactInfo::EndTrace)
  ;
}
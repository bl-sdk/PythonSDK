#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBloodSplatterTrace()
{
    class_< FBloodSplatterTrace >("FBloodSplatterTrace", no_init)
        .def_readwrite("HitRegion", &FBloodSplatterTrace::HitRegion)
        .def_readwrite("HitLocation", &FBloodSplatterTrace::HitLocation)
        .def_readwrite("Momentum", &FBloodSplatterTrace::Momentum)
        .def_readwrite("DamageSeverityPercent", &FBloodSplatterTrace::DamageSeverityPercent)
  ;
}
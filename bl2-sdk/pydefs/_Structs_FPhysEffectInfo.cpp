#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPhysEffectInfo()
{
    class_< FPhysEffectInfo >("FPhysEffectInfo", no_init)
        .def_readwrite("Threshold", &FPhysEffectInfo::Threshold)
        .def_readwrite("ReFireDelay", &FPhysEffectInfo::ReFireDelay)
        .def_readwrite("Effect", &FPhysEffectInfo::Effect)
        .def_readwrite("Sound", &FPhysEffectInfo::Sound)
        .def_readwrite("ImpactDefinition", &FPhysEffectInfo::ImpactDefinition)
  ;
}
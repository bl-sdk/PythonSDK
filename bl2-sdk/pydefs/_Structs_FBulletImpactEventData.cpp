#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBulletImpactEventData()
{
    class_< FBulletImpactEventData >("FBulletImpactEventData", no_init)
        .def_readwrite("DamageSurfaceType", &FBulletImpactEventData::DamageSurfaceType)
        .def_readwrite("Behaviors", &FBulletImpactEventData::Behaviors)
  ;
}
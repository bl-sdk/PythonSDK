#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FProjectileClassEventData()
{
    class_< FProjectileClassEventData >("FProjectileClassEventData", no_init)
        .def_readwrite("ProjectileClassName", &FProjectileClassEventData::ProjectileClassName)
  ;
}
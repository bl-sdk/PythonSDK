#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FActiveDecalInfo()
{
    class_< FActiveDecalInfo >("FActiveDecalInfo", no_init)
        .def_readwrite("Decal", &FActiveDecalInfo::Decal)
        .def_readwrite("LifetimeRemaining", &FActiveDecalInfo::LifetimeRemaining)
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRecentExplosion()
{
    class_< FRecentExplosion >("FRecentExplosion", no_init)
        .def_readwrite("ExplosionInstigatorName", &FRecentExplosion::ExplosionInstigatorName)
        .def_readwrite("ExplosionLocation", &FRecentExplosion::ExplosionLocation)
        .def_readwrite("ExpirationTime", &FRecentExplosion::ExpirationTime)
  ;
}
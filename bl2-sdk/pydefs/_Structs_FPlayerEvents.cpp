#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerEvents()
{
    class_< FPlayerEvents >("FPlayerEvents", no_init)
        .def_readwrite("TotalEvents", &FPlayerEvents::TotalEvents)
        .def_readwrite("WeaponEvents", &FPlayerEvents::WeaponEvents)
        .def_readwrite("DamageAsPlayerEvents", &FPlayerEvents::DamageAsPlayerEvents)
        .def_readwrite("DamageAsTargetEvents", &FPlayerEvents::DamageAsTargetEvents)
        .def_readwrite("ProjectileEvents", &FPlayerEvents::ProjectileEvents)
        .def_readwrite("PawnEvents", &FPlayerEvents::PawnEvents)
  ;
}
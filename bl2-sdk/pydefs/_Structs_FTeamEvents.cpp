#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTeamEvents()
{
    class_< FTeamEvents >("FTeamEvents", no_init)
        .def_readwrite("TotalEvents", &FTeamEvents::TotalEvents)
        .def_readwrite("WeaponEvents", &FTeamEvents::WeaponEvents)
        .def_readwrite("DamageAsPlayerEvents", &FTeamEvents::DamageAsPlayerEvents)
        .def_readwrite("DamageAsTargetEvents", &FTeamEvents::DamageAsTargetEvents)
        .def_readwrite("ProjectileEvents", &FTeamEvents::ProjectileEvents)
        .def_readwrite("PawnEvents", &FTeamEvents::PawnEvents)
  ;
}
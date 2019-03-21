#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTeamEvents(py::object m)
{
    py::class_< FTeamEvents >(m, "FTeamEvents")
        .def_readwrite("TotalEvents", &FTeamEvents::TotalEvents)
        .def_readwrite("WeaponEvents", &FTeamEvents::WeaponEvents)
        .def_readwrite("DamageAsPlayerEvents", &FTeamEvents::DamageAsPlayerEvents)
        .def_readwrite("DamageAsTargetEvents", &FTeamEvents::DamageAsTargetEvents)
        .def_readwrite("ProjectileEvents", &FTeamEvents::ProjectileEvents)
        .def_readwrite("PawnEvents", &FTeamEvents::PawnEvents)
  ;
}
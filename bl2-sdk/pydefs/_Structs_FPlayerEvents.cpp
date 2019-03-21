#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerEvents(py::object m)
{
    py::class_< FPlayerEvents >(m, "FPlayerEvents")
        .def_readwrite("TotalEvents", &FPlayerEvents::TotalEvents)
        .def_readwrite("WeaponEvents", &FPlayerEvents::WeaponEvents)
        .def_readwrite("DamageAsPlayerEvents", &FPlayerEvents::DamageAsPlayerEvents)
        .def_readwrite("DamageAsTargetEvents", &FPlayerEvents::DamageAsTargetEvents)
        .def_readwrite("ProjectileEvents", &FPlayerEvents::ProjectileEvents)
        .def_readwrite("PawnEvents", &FPlayerEvents::PawnEvents)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDeathByWeaponStatID(py::object m)
{
    py::class_< FDeathByWeaponStatID >(m, "FDeathByWeaponStatID")
        .def_readwrite("DamageCauserType", &FDeathByWeaponStatID::DamageCauserType)
        .def_readwrite("StatId", &FDeathByWeaponStatID::StatId)
  ;
}
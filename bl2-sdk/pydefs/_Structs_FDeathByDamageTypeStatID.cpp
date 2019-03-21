#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDeathByDamageTypeStatID(py::object m)
{
    py::class_< FDeathByDamageTypeStatID >(m, "FDeathByDamageTypeStatID")
        .def_readwrite("DamageType", &FDeathByDamageTypeStatID::DamageType)
        .def_readwrite("StatId", &FDeathByDamageTypeStatID::StatId)
  ;
}
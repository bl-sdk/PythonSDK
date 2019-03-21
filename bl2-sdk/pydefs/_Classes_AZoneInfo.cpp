#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AZoneInfo()
{
    py::class_< AZoneInfo,  AActor   >("AZoneInfo")
        .def_readwrite("KillZ", &AZoneInfo::KillZ)
        .def_readwrite("SoftKill", &AZoneInfo::SoftKill)
        .def_readwrite("KillZDamageType", &AZoneInfo::KillZDamageType)
        .def("StaticClass", &AZoneInfo::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
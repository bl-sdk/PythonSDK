#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOngoingEffectInfo(py::module &m)
{
    py::class_< FOngoingEffectInfo >(m, "FOngoingEffectInfo")
        .def_readwrite("TotalDamageDealtToHealth", &FOngoingEffectInfo::TotalDamageDealtToHealth)
        .def_readwrite("TotalDamageDealtToShields", &FOngoingEffectInfo::TotalDamageDealtToShields)
        .def_readwrite("Duration", &FOngoingEffectInfo::Duration)
  ;
}
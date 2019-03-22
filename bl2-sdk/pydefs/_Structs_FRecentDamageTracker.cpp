#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRecentDamageTracker(py::module &m)
{
    py::class_< FRecentDamageTracker >(m, "FRecentDamageTracker")
        .def_readwrite("TotalDamage", &FRecentDamageTracker::TotalDamage)
        .def_readwrite("HealthDamage", &FRecentDamageTracker::HealthDamage)
        .def_readwrite("ShieldDamage", &FRecentDamageTracker::ShieldDamage)
  ;
}
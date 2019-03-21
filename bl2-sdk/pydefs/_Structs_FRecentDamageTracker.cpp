#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRecentDamageTracker()
{
    class_< FRecentDamageTracker >("FRecentDamageTracker", no_init)
        .def_readwrite("TotalDamage", &FRecentDamageTracker::TotalDamage)
        .def_readwrite("HealthDamage", &FRecentDamageTracker::HealthDamage)
        .def_readwrite("ShieldDamage", &FRecentDamageTracker::ShieldDamage)
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOngoingEffectInfo()
{
    class_< FOngoingEffectInfo >("FOngoingEffectInfo", no_init)
        .def_readwrite("TotalDamageDealtToHealth", &FOngoingEffectInfo::TotalDamageDealtToHealth)
        .def_readwrite("TotalDamageDealtToShields", &FOngoingEffectInfo::TotalDamageDealtToShields)
        .def_readwrite("Duration", &FOngoingEffectInfo::Duration)
  ;
}
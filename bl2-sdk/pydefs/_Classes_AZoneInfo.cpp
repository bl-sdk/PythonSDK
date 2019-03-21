#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AZoneInfo()
{
    class_< AZoneInfo, bases< AActor >  , boost::noncopyable>("AZoneInfo", no_init)
        .def_readwrite("KillZ", &AZoneInfo::KillZ)
        .def_readwrite("SoftKill", &AZoneInfo::SoftKill)
        .def_readwrite("KillZDamageType", &AZoneInfo::KillZDamageType)
        .def("StaticClass", &AZoneInfo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
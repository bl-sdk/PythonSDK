#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FViewConeInfo()
{
    class_< FViewConeInfo >("FViewConeInfo", no_init)
        .def_readwrite("ConeOrigin", &FViewConeInfo::ConeOrigin)
        .def_readwrite("ConeDirection", &FViewConeInfo::ConeDirection)
        .def_readwrite("ConeAngle", &FViewConeInfo::ConeAngle)
        .def_readwrite("ConeLength", &FViewConeInfo::ConeLength)
        .def_readwrite("ConeColor", &FViewConeInfo::ConeColor)
  ;
}
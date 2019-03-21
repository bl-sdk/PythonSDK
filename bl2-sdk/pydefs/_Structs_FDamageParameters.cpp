#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamageParameters()
{
    class_< FDamageParameters >("FDamageParameters", no_init)
        .def_readwrite("OverrideMode", &FDamageParameters::OverrideMode)
        .def_readwrite("BaseDamage", &FDamageParameters::BaseDamage)
        .def_readwrite("Radius", &FDamageParameters::Radius)
        .def_readwrite("Momentum", &FDamageParameters::Momentum)
  ;
}
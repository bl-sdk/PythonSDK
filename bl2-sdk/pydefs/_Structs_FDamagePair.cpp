#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamagePair()
{
    class_< FDamagePair >("FDamagePair", no_init)
        .def_readwrite("DamageCauserName", &FDamagePair::DamageCauserName)
        .def_readwrite("Params", &FDamagePair::Params)
  ;
}
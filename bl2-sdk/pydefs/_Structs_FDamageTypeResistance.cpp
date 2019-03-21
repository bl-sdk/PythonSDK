#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamageTypeResistance()
{
    class_< FDamageTypeResistance >("FDamageTypeResistance", no_init)
        .def_readwrite("ResistanceToImpact", &FDamageTypeResistance::ResistanceToImpact)
        .def_readwrite("ResistanceToStatusEffect", &FDamageTypeResistance::ResistanceToStatusEffect)
  ;
}
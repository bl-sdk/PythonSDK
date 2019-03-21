#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamageTypeExpModifier()
{
    class_< FDamageTypeExpModifier >("FDamageTypeExpModifier", no_init)
        .def_readwrite("DamageSource", &FDamageTypeExpModifier::DamageSource)
        .def_readwrite("TypeDefinition", &FDamageTypeExpModifier::TypeDefinition)
        .def_readwrite("Multiplier", &FDamageTypeExpModifier::Multiplier)
  ;
}
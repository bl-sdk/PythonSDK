#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttributePresentationDamageTypeMapping()
{
    class_< FAttributePresentationDamageTypeMapping >("FAttributePresentationDamageTypeMapping", no_init)
        .def_readwrite("Presentation", &FAttributePresentationDamageTypeMapping::Presentation)
        .def_readwrite("DamageType", &FAttributePresentationDamageTypeMapping::DamageType)
  ;
}
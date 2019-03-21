#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAppliedAttributeEffect()
{
    class_< FAppliedAttributeEffect >("FAppliedAttributeEffect", no_init)
        .def_readwrite("Context", &FAppliedAttributeEffect::Context)
        .def_readwrite("Attribute", &FAppliedAttributeEffect::Attribute)
        .def_readwrite("Modifier", &FAppliedAttributeEffect::Modifier)
  ;
}
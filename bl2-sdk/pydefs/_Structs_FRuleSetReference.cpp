#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRuleSetReference()
{
    class_< FRuleSetReference >("FRuleSetReference", no_init)
        .def_readwrite("ReferenceName", &FRuleSetReference::ReferenceName)
        .def_readwrite("ReferenceRuleSet", &FRuleSetReference::ReferenceRuleSet)
  ;
}
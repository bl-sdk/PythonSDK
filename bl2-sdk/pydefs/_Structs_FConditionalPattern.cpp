#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FConditionalPattern()
{
    class_< FConditionalPattern >("FConditionalPattern", no_init)
        .def_readwrite("Conditions", &FConditionalPattern::Conditions)
        .def_readwrite("Pattern", &FConditionalPattern::Pattern)
  ;
}
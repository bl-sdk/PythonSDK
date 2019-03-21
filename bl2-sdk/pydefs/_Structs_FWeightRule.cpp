#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeightRule()
{
    class_< FWeightRule >("FWeightRule", no_init)
        .def_readwrite("FirstNode", &FWeightRule::FirstNode)
        .def_readwrite("SecondNode", &FWeightRule::SecondNode)
  ;
}
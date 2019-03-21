#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBonePair()
{
    class_< FBonePair >("FBonePair", no_init)
        .def_readonly("Bones", &FBonePair::Bones)
  ;
}
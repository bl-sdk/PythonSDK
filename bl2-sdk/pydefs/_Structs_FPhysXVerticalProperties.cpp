#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPhysXVerticalProperties()
{
    class_< FPhysXVerticalProperties >("FPhysXVerticalProperties", no_init)
        .def_readwrite("Emitters", &FPhysXVerticalProperties::Emitters)
  ;
}
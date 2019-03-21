#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLiftBodyPair()
{
    class_< FLiftBodyPair >("FLiftBodyPair", no_init)
        .def_readwrite("BodyTag", &FLiftBodyPair::BodyTag)
        .def_readwrite("PhaseLockDef", &FLiftBodyPair::PhaseLockDef)
  ;
}
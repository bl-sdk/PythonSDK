#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FEmitterBaseInfo()
{
    class_< FEmitterBaseInfo >("FEmitterBaseInfo", no_init)
        .def_readwrite("PSC", &FEmitterBaseInfo::PSC)
        .def_readwrite("Base", &FEmitterBaseInfo::Base)
        .def_readwrite("RelativeLocation", &FEmitterBaseInfo::RelativeLocation)
        .def_readwrite("RelativeRotation", &FEmitterBaseInfo::RelativeRotation)
  ;
}
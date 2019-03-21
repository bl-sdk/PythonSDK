#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FImpulseData()
{
    class_< FImpulseData >("FImpulseData", no_init)
        .def_readwrite("Impulse", &FImpulseData::Impulse)
        .def_readwrite("Source", &FImpulseData::Source)
  ;
}
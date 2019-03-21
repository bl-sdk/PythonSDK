#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAccelStateData()
{
    class_< FAccelStateData >("FAccelStateData", no_init)
        .def_readwrite("Warmup", &FAccelStateData::Warmup)
        .def_readwrite("CurrentSpeed", &FAccelStateData::CurrentSpeed)
        .def_readwrite("Direction", &FAccelStateData::Direction)
  ;
}
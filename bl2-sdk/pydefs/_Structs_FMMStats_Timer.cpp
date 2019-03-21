#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMMStats_Timer()
{
    class_< FMMStats_Timer >("FMMStats_Timer", no_init)
        .def_readwrite("MSecs", &FMMStats_Timer::MSecs)
  ;
}
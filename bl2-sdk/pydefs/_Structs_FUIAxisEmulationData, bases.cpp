#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUIAxisEmulationData()
{
    class_< FUIAxisEmulationData, bases< FUIKeyRepeatData >  >("FUIAxisEmulationData", no_init)
  ;
}
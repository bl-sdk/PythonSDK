#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAlphaMap()
{
    class_< FAlphaMap >("FAlphaMap", no_init)
  ;
}
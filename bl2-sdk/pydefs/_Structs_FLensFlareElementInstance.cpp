#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLensFlareElementInstance()
{
    class_< FLensFlareElementInstance >("FLensFlareElementInstance", no_init)
  ;
}
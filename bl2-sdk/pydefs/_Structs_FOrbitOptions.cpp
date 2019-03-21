#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FOrbitOptions()
{
    class_< FOrbitOptions >("FOrbitOptions", no_init)
  ;
}
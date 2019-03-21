#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBeamModifierOptions()
{
    class_< FBeamModifierOptions >("FBeamModifierOptions", no_init)
  ;
}
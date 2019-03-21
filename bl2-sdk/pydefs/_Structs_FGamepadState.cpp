#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGamepadState()
{
    class_< FGamepadState >("FGamepadState", no_init)
  ;
}
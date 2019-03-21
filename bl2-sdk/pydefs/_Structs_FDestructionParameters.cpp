#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDestructionParameters()
{
    class_< FDestructionParameters >("FDestructionParameters", no_init)
  ;
}
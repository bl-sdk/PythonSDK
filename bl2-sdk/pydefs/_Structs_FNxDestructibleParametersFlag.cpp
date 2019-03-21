#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNxDestructibleParametersFlag()
{
    class_< FNxDestructibleParametersFlag >("FNxDestructibleParametersFlag", no_init)
  ;
}
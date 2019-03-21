#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLocalTalker()
{
    class_< FLocalTalker >("FLocalTalker", no_init)
  ;
}
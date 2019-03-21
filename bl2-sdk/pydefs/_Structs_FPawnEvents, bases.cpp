#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPawnEvents()
{
    class_< FPawnEvents, bases< FEventsBase >  >("FPawnEvents", no_init)
  ;
}
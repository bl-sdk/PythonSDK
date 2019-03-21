#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamageEvents()
{
    class_< FDamageEvents, bases< FEventsBase >  >("FDamageEvents", no_init)
  ;
}
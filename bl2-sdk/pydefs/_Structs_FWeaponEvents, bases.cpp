#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FWeaponEvents()
{
    class_< FWeaponEvents, bases< FEventsBase >  >("FWeaponEvents", no_init)
  ;
}
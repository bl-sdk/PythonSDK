#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCombatZone()
{
    class_< FCombatZone >("FCombatZone", no_init)
        .def_readwrite("Index", &FCombatZone::Index)
        .def_readwrite("Bounds", &FCombatZone::Bounds)
  ;
}
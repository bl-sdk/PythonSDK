#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHolsteredGearDisplaySlot()
{
    class_< FHolsteredGearDisplaySlot >("FHolsteredGearDisplaySlot", no_init)
        .def_readwrite("State", &FHolsteredGearDisplaySlot::State)
        .def_readwrite("Item", &FHolsteredGearDisplaySlot::Item)
  ;
}
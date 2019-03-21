#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHolsteredGearDisplaySlot()
{
    py::class_< FHolsteredGearDisplaySlot >("FHolsteredGearDisplaySlot")
        .def_readwrite("State", &FHolsteredGearDisplaySlot::State)
        .def_readwrite("Item", &FHolsteredGearDisplaySlot::Item)
  ;
}
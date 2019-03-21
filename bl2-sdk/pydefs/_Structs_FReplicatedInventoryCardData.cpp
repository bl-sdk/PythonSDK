#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FReplicatedInventoryCardData()
{
    class_< FReplicatedInventoryCardData >("FReplicatedInventoryCardData", no_init)
        .def_readwrite("ModifierValue", &FReplicatedInventoryCardData::ModifierValue)
        .def_readwrite("ModifierStatIndex", &FReplicatedInventoryCardData::ModifierStatIndex)
  ;
}
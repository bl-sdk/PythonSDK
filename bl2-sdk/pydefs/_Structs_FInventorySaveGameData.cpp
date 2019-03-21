#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInventorySaveGameData()
{
    class_< FInventorySaveGameData >("FInventorySaveGameData", no_init)
        .def_readwrite("DefinitionData", &FInventorySaveGameData::DefinitionData)
        .def_readwrite("Quantity", &FInventorySaveGameData::Quantity)
        .def_readwrite("Mark", &FInventorySaveGameData::Mark)
  ;
}
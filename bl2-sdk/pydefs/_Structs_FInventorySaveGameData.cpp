#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInventorySaveGameData()
{
    py::class_< FInventorySaveGameData >("FInventorySaveGameData")
        .def_readwrite("DefinitionData", &FInventorySaveGameData::DefinitionData)
        .def_readwrite("Quantity", &FInventorySaveGameData::Quantity)
        .def_readwrite("Mark", &FInventorySaveGameData::Mark)
  ;
}
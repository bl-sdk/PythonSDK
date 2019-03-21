#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInventorySaveGameData(py::object m)
{
    py::class_< FInventorySaveGameData >(m, "FInventorySaveGameData")
        .def_readwrite("DefinitionData", &FInventorySaveGameData::DefinitionData)
        .def_readwrite("Quantity", &FInventorySaveGameData::Quantity)
        .def_readwrite("Mark", &FInventorySaveGameData::Mark)
  ;
}
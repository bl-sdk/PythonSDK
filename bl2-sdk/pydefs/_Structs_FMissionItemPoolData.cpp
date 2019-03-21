#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionItemPoolData(py::object m)
{
    py::class_< FMissionItemPoolData >(m, "FMissionItemPoolData")
        .def_readwrite("ItemObjective", &FMissionItemPoolData::ItemObjective)
        .def_readwrite("DirectiveDefinition", &FMissionItemPoolData::DirectiveDefinition)
        .def_readwrite("ItemPool", &FMissionItemPoolData::ItemPool)
  ;
}
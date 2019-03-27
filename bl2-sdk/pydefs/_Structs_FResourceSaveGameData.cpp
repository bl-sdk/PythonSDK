#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FResourceSaveGameData(py::module &m)
{
    py::class_< FResourceSaveGameData >(m, "FResourceSaveGameData")
        .def_readwrite("ResourceDefinition", &FResourceSaveGameData::ResourceDefinition)
        .def_readwrite("ResourcePoolDefinition", &FResourceSaveGameData::ResourcePoolDefinition)
        .def_readwrite("Amount", &FResourceSaveGameData::Amount)
        .def_readwrite("UpgradeLevel", &FResourceSaveGameData::UpgradeLevel)
  ;
}
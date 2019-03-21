#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLootConfigurationData(py::object m)
{
    py::class_< FLootConfigurationData >(m, "FLootConfigurationData")
        .def_readwrite("ConfigurationName", &FLootConfigurationData::ConfigurationName)
        .def_readwrite("LootGameStageVarianceFormula", &FLootConfigurationData::LootGameStageVarianceFormula)
        .def_readwrite("Weight", &FLootConfigurationData::Weight)
        .def_readwrite("ItemAttachments", &FLootConfigurationData::ItemAttachments)
  ;
}
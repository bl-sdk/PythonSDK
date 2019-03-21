#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLootConfigurationData()
{
    class_< FLootConfigurationData >("FLootConfigurationData", no_init)
        .def_readwrite("ConfigurationName", &FLootConfigurationData::ConfigurationName)
        .def_readwrite("LootGameStageVarianceFormula", &FLootConfigurationData::LootGameStageVarianceFormula)
        .def_readwrite("Weight", &FLootConfigurationData::Weight)
        .def_readwrite("ItemAttachments", &FLootConfigurationData::ItemAttachments)
  ;
}
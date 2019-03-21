#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemDefinitionData()
{
    py::class_< FItemDefinitionData >("FItemDefinitionData")
        .def_readwrite("ItemDefinition", &FItemDefinitionData::ItemDefinition)
        .def_readwrite("BalanceDefinition", &FItemDefinitionData::BalanceDefinition)
        .def_readwrite("ManufacturerDefinition", &FItemDefinitionData::ManufacturerDefinition)
        .def_readwrite("ManufacturerGradeIndex", &FItemDefinitionData::ManufacturerGradeIndex)
        .def_readwrite("AlphaItemPartDefinition", &FItemDefinitionData::AlphaItemPartDefinition)
        .def_readwrite("BetaItemPartDefinition", &FItemDefinitionData::BetaItemPartDefinition)
        .def_readwrite("GammaItemPartDefinition", &FItemDefinitionData::GammaItemPartDefinition)
        .def_readwrite("DeltaItemPartDefinition", &FItemDefinitionData::DeltaItemPartDefinition)
        .def_readwrite("EpsilonItemPartDefinition", &FItemDefinitionData::EpsilonItemPartDefinition)
        .def_readwrite("ZetaItemPartDefinition", &FItemDefinitionData::ZetaItemPartDefinition)
        .def_readwrite("EtaItemPartDefinition", &FItemDefinitionData::EtaItemPartDefinition)
        .def_readwrite("ThetaItemPartDefinition", &FItemDefinitionData::ThetaItemPartDefinition)
        .def_readwrite("MaterialItemPartDefinition", &FItemDefinitionData::MaterialItemPartDefinition)
        .def_readwrite("PrefixItemNamePartDefinition", &FItemDefinitionData::PrefixItemNamePartDefinition)
        .def_readwrite("TitleItemNamePartDefinition", &FItemDefinitionData::TitleItemNamePartDefinition)
        .def_readwrite("GameStage", &FItemDefinitionData::GameStage)
        .def_readwrite("UniqueId", &FItemDefinitionData::UniqueId)
  ;
}
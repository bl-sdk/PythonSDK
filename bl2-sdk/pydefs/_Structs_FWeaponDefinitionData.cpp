#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FWeaponDefinitionData(py::module &m)
{
    py::class_< FWeaponDefinitionData >(m, "FWeaponDefinitionData")
        .def_readwrite("WeaponTypeDefinition", &FWeaponDefinitionData::WeaponTypeDefinition)
        .def_readwrite("BalanceDefinition", &FWeaponDefinitionData::BalanceDefinition)
        .def_readwrite("ManufacturerDefinition", &FWeaponDefinitionData::ManufacturerDefinition)
        .def_readwrite("ManufacturerGradeIndex", &FWeaponDefinitionData::ManufacturerGradeIndex)
        .def_readwrite("BodyPartDefinition", &FWeaponDefinitionData::BodyPartDefinition)
        .def_readwrite("GripPartDefinition", &FWeaponDefinitionData::GripPartDefinition)
        .def_readwrite("BarrelPartDefinition", &FWeaponDefinitionData::BarrelPartDefinition)
        .def_readwrite("SightPartDefinition", &FWeaponDefinitionData::SightPartDefinition)
        .def_readwrite("StockPartDefinition", &FWeaponDefinitionData::StockPartDefinition)
        .def_readwrite("ElementalPartDefinition", &FWeaponDefinitionData::ElementalPartDefinition)
        .def_readwrite("Accessory1PartDefinition", &FWeaponDefinitionData::Accessory1PartDefinition)
        .def_readwrite("Accessory2PartDefinition", &FWeaponDefinitionData::Accessory2PartDefinition)
        .def_readwrite("MaterialPartDefinition", &FWeaponDefinitionData::MaterialPartDefinition)
        .def_readwrite("PrefixPartDefinition", &FWeaponDefinitionData::PrefixPartDefinition)
        .def_readwrite("TitlePartDefinition", &FWeaponDefinitionData::TitlePartDefinition)
        .def_readwrite("GameStage", &FWeaponDefinitionData::GameStage)
        .def_readwrite("UniqueId", &FWeaponDefinitionData::UniqueId)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVendingMachineGFxDefinition(py::module &m)
{
    py::class_< UVendingMachineGFxDefinition,  UWillowGFxMovie3DDefinition   >(m, "UVendingMachineGFxDefinition")
        .def_readwrite("StrictGiveUpDistance", &UVendingMachineGFxDefinition::StrictGiveUpDistance)
        .def_readwrite("LooseGiveUpDistance", &UVendingMachineGFxDefinition::LooseGiveUpDistance)
        .def_readwrite("StrictTolerance", &UVendingMachineGFxDefinition::StrictTolerance)
        .def_readwrite("LooseTolerance", &UVendingMachineGFxDefinition::LooseTolerance)
        .def_readwrite("InitialLeftCell", &UVendingMachineGFxDefinition::InitialLeftCell)
        .def_readwrite("InitialRightCell", &UVendingMachineGFxDefinition::InitialRightCell)
        .def_readwrite("ItemOfTheDayCell", &UVendingMachineGFxDefinition::ItemOfTheDayCell)
        .def_readwrite("Card1Tex", &UVendingMachineGFxDefinition::Card1Tex)
        .def_readwrite("Card2Tex", &UVendingMachineGFxDefinition::Card2Tex)
        .def_readwrite("RightSideCellOrderNames", &UVendingMachineGFxDefinition::RightSideCellOrderNames)
        .def_readwrite("BackpackCellNames", &UVendingMachineGFxDefinition::BackpackCellNames)
        .def_readwrite("EquippedCellNames", &UVendingMachineGFxDefinition::EquippedCellNames)
        .def_readwrite("TotalNumberOfCells", &UVendingMachineGFxDefinition::TotalNumberOfCells)
        .def_readwrite("WeaponsLeftSideDef", &UVendingMachineGFxDefinition::WeaponsLeftSideDef)
        .def_readwrite("WeaponsRightSideDef", &UVendingMachineGFxDefinition::WeaponsRightSideDef)
        .def_readwrite("GrenadesLeftSideDef", &UVendingMachineGFxDefinition::GrenadesLeftSideDef)
        .def_readwrite("GrenadesRightSideDef", &UVendingMachineGFxDefinition::GrenadesRightSideDef)
        .def_readwrite("HealthLeftSideDef", &UVendingMachineGFxDefinition::HealthLeftSideDef)
        .def_readwrite("HealthRightSideDef", &UVendingMachineGFxDefinition::HealthRightSideDef)
        .def_readwrite("ItemOfTheDay_Texture_Width", &UVendingMachineGFxDefinition::ItemOfTheDay_Texture_Width)
        .def_readwrite("ItemOfTheDay_Texture_Height", &UVendingMachineGFxDefinition::ItemOfTheDay_Texture_Height)
        .def_readwrite("ItemOfTheDay_Cell_Width", &UVendingMachineGFxDefinition::ItemOfTheDay_Cell_Width)
        .def_readwrite("ItemOfTheDay_Cell_Height", &UVendingMachineGFxDefinition::ItemOfTheDay_Cell_Height)
        .def_readwrite("Card_Texture_Width", &UVendingMachineGFxDefinition::Card_Texture_Width)
        .def_readwrite("Card_Texture_Height", &UVendingMachineGFxDefinition::Card_Texture_Height)
        .def_readwrite("Card_Cell_Width", &UVendingMachineGFxDefinition::Card_Cell_Width)
        .def_readwrite("Card_Cell_Height", &UVendingMachineGFxDefinition::Card_Cell_Height)
        .def_readwrite("ItemOfTheDayTextureLinkage", &UVendingMachineGFxDefinition::ItemOfTheDayTextureLinkage)
        .def_readwrite("Card1TextureLinkage", &UVendingMachineGFxDefinition::Card1TextureLinkage)
        .def_readwrite("Card2TextureLinkage", &UVendingMachineGFxDefinition::Card2TextureLinkage)
        .def_readwrite("RefreshInterval", &UVendingMachineGFxDefinition::RefreshInterval)
        .def("StaticClass", &UVendingMachineGFxDefinition::StaticClass, py::return_value_policy::reference)
          ;
}
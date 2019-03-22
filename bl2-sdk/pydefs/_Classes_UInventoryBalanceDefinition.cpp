#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryBalanceDefinition(py::module &m)
{
    py::class_< UInventoryBalanceDefinition,  UBaseBalanceDefinition   >(m, "UInventoryBalanceDefinition")
        .def_readwrite("VfTable_IIDlcLicensableObject", &UInventoryBalanceDefinition::VfTable_IIDlcLicensableObject)
        .def_readwrite("InventoryDefinition", &UInventoryBalanceDefinition::InventoryDefinition)
        .def_readwrite("BaseDefinition", &UInventoryBalanceDefinition::BaseDefinition)
        .def_readwrite("Manufacturers", &UInventoryBalanceDefinition::Manufacturers)
        .def_readwrite("DlcItemSet", &UInventoryBalanceDefinition::DlcItemSet)
        .def_readwrite("PartListCollection", &UInventoryBalanceDefinition::PartListCollection)
        .def_readwrite("PlayerClassId", &UInventoryBalanceDefinition::PlayerClassId)
        .def("StaticClass", &UInventoryBalanceDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetDownloadableContentDefinition", &UInventoryBalanceDefinition::GetDownloadableContentDefinition, py::return_value_policy::reference)
        .def("GetInventoryPartListCollection", &UInventoryBalanceDefinition::GetInventoryPartListCollection, py::return_value_policy::reference)
        .def("GetInventoryDefinitionForManufacturerGrade", &UInventoryBalanceDefinition::GetInventoryDefinitionForManufacturerGrade, py::return_value_policy::reference)
        .def("HACKGetVehicleInventoryDefinition", &UInventoryBalanceDefinition::HACKGetVehicleInventoryDefinition, py::return_value_policy::reference)
        .def("GetExpLevelFromManufacturerData", &UInventoryBalanceDefinition::GetExpLevelFromManufacturerData)
        .def("GetRequiredPlayerClassId", &UInventoryBalanceDefinition::GetRequiredPlayerClassId, py::return_value_policy::reference)
        .def("GetInventoryDefinition", &UInventoryBalanceDefinition::GetInventoryDefinition, py::return_value_policy::reference)
          ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInventoryBalanceDefinition()
{
    class_< UInventoryBalanceDefinition, bases< UBaseBalanceDefinition >  , boost::noncopyable>("UInventoryBalanceDefinition", no_init)
        .def_readwrite("VfTable_IIDlcLicensableObject", &UInventoryBalanceDefinition::VfTable_IIDlcLicensableObject)
        .def_readwrite("InventoryDefinition", &UInventoryBalanceDefinition::InventoryDefinition)
        .def_readwrite("BaseDefinition", &UInventoryBalanceDefinition::BaseDefinition)
        .def_readwrite("Manufacturers", &UInventoryBalanceDefinition::Manufacturers)
        .def_readwrite("DlcItemSet", &UInventoryBalanceDefinition::DlcItemSet)
        .def_readwrite("PartListCollection", &UInventoryBalanceDefinition::PartListCollection)
        .def_readwrite("PlayerClassId", &UInventoryBalanceDefinition::PlayerClassId)
        .def("StaticClass", &UInventoryBalanceDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDownloadableContentDefinition", &UInventoryBalanceDefinition::GetDownloadableContentDefinition, return_value_policy< reference_existing_object >())
        .def("GetInventoryPartListCollection", &UInventoryBalanceDefinition::GetInventoryPartListCollection, return_value_policy< reference_existing_object >())
        .def("GetInventoryDefinitionForManufacturerGrade", &UInventoryBalanceDefinition::GetInventoryDefinitionForManufacturerGrade, return_value_policy< reference_existing_object >())
        .def("HACKGetVehicleInventoryDefinition", &UInventoryBalanceDefinition::HACKGetVehicleInventoryDefinition, return_value_policy< reference_existing_object >())
        .def("GetExpLevelFromManufacturerData", &UInventoryBalanceDefinition::GetExpLevelFromManufacturerData)
        .def("GetRequiredPlayerClassId", &UInventoryBalanceDefinition::GetRequiredPlayerClassId, return_value_policy< reference_existing_object >())
        .def("GetInventoryDefinition", &UInventoryBalanceDefinition::GetInventoryDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
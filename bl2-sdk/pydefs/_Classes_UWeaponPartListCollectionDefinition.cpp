#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponPartListCollectionDefinition(py::module &m)
{
    py::class_< UWeaponPartListCollectionDefinition,  UInventoryPartListCollectionDefinition   >(m, "UWeaponPartListCollectionDefinition")
        .def_readwrite("AssociatedWeaponType", &UWeaponPartListCollectionDefinition::AssociatedWeaponType)
        .def_readwrite("BodyPartData", &UWeaponPartListCollectionDefinition::BodyPartData)
        .def_readwrite("GripPartData", &UWeaponPartListCollectionDefinition::GripPartData)
        .def_readwrite("BarrelPartData", &UWeaponPartListCollectionDefinition::BarrelPartData)
        .def_readwrite("SightPartData", &UWeaponPartListCollectionDefinition::SightPartData)
        .def_readwrite("StockPartData", &UWeaponPartListCollectionDefinition::StockPartData)
        .def_readwrite("ElementalPartData", &UWeaponPartListCollectionDefinition::ElementalPartData)
        .def_readwrite("Accessory1PartData", &UWeaponPartListCollectionDefinition::Accessory1PartData)
        .def_readwrite("Accessory2PartData", &UWeaponPartListCollectionDefinition::Accessory2PartData)
        .def_readwrite("MaterialPartData", &UWeaponPartListCollectionDefinition::MaterialPartData)
        .def("StaticClass", &UWeaponPartListCollectionDefinition::StaticClass, py::return_value_policy::reference)
          ;
}
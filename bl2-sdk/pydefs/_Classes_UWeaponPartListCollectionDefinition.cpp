#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponPartListCollectionDefinition()
{
    class_< UWeaponPartListCollectionDefinition, bases< UInventoryPartListCollectionDefinition >  , boost::noncopyable>("UWeaponPartListCollectionDefinition", no_init)
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
        .def("StaticClass", &UWeaponPartListCollectionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
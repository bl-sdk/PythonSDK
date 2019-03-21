#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEquippedInventoryAttributeContextResolver()
{
    class_< UEquippedInventoryAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UEquippedInventoryAttributeContextResolver", no_init)
        .def_readwrite("EquipmentLocation", &UEquippedInventoryAttributeContextResolver::EquipmentLocation)
        .def("StaticClass", &UEquippedInventoryAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
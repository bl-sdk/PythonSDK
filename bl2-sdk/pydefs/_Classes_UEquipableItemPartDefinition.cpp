#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UEquipableItemPartDefinition()
{
    class_< UEquipableItemPartDefinition, bases< UItemPartDefinition >  , boost::noncopyable>("UEquipableItemPartDefinition", no_init)
        .def("StaticClass", &UEquipableItemPartDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnUnequipped", &UEquipableItemPartDefinition::OnUnequipped)
        .def("OnEquipped", &UEquipableItemPartDefinition::OnEquipped)
        .staticmethod("StaticClass")
  ;
}
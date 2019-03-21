#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowUsableCustomizationItem()
{
    class_< AWillowUsableCustomizationItem, bases< AWillowUsableItem >  , boost::noncopyable>("AWillowUsableCustomizationItem", no_init)
        .def("StaticClass", &AWillowUsableCustomizationItem::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsUsefulToThisPlayer", &AWillowUsableCustomizationItem::IsUsefulToThisPlayer)
        .def("GetItemCardTopSectionString", &AWillowUsableCustomizationItem::GetItemCardTopSectionString)
        .def("InitMeshes", &AWillowUsableCustomizationItem::InitMeshes)
        .def("eventIsItemAutoUsedBy", &AWillowUsableCustomizationItem::eventIsItemAutoUsedBy)
        .def("FormatFunStatsText", &AWillowUsableCustomizationItem::FormatFunStatsText)
        .def("CanBeApplied", &AWillowUsableCustomizationItem::CanBeApplied)
        .def("TryConsume", &AWillowUsableCustomizationItem::TryConsume)
        .def("IsConsumable", &AWillowUsableCustomizationItem::IsConsumable)
        .def("ValidateDefinition", &AWillowUsableCustomizationItem::ValidateDefinition)
        .staticmethod("StaticClass")
  ;
}
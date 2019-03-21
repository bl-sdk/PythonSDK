#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCrossDLCClassModDefinition()
{
    class_< UCrossDLCClassModDefinition, bases< UEquipableItemDefinition >  , boost::noncopyable>("UCrossDLCClassModDefinition", no_init)
        .def_readwrite("RequiredPlayerClassPathName", &UCrossDLCClassModDefinition::RequiredPlayerClassPathName)
        .def_readwrite("ManufacturerOverride", &UClassModDefinition::ManufacturerOverride)
        .def_readwrite("DisplayClassModAtBeginningOfName", &UClassModDefinition::DisplayClassModAtBeginningOfName)
        .def("StaticClass", &UCrossDLCClassModDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("DisplayTitleAtEnd", &UClassModDefinition::DisplayTitleAtEnd)
        .def("GetManufacturerOverrideOrDefault", &UClassModDefinition::GetManufacturerOverrideOrDefault, return_value_policy< reference_existing_object >())
        .def("GetEquipmentLocation", &UClassModDefinition::GetEquipmentLocation)
        .def("PlayerClassRequirementMet", &UClassModDefinition::PlayerClassRequirementMet)
        .staticmethod("StaticClass")
  ;
}
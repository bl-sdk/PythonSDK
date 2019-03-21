#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCrossDLCClassModDefinition()
{
    py::class_< UCrossDLCClassModDefinition,  UEquipableItemDefinition   >("UCrossDLCClassModDefinition")
        .def_readwrite("RequiredPlayerClassPathName", &UCrossDLCClassModDefinition::RequiredPlayerClassPathName)
        .def_readwrite("ManufacturerOverride", &UClassModDefinition::ManufacturerOverride)
        .def_readwrite("DisplayClassModAtBeginningOfName", &UClassModDefinition::DisplayClassModAtBeginningOfName)
        .def("StaticClass", &UCrossDLCClassModDefinition::StaticClass, py::return_value_policy::reference)
        .def("DisplayTitleAtEnd", &UClassModDefinition::DisplayTitleAtEnd)
        .def("GetManufacturerOverrideOrDefault", &UClassModDefinition::GetManufacturerOverrideOrDefault, py::return_value_policy::reference)
        .def("GetEquipmentLocation", &UClassModDefinition::GetEquipmentLocation)
        .def("PlayerClassRequirementMet", &UClassModDefinition::PlayerClassRequirementMet)
        .staticmethod("StaticClass")
  ;
}
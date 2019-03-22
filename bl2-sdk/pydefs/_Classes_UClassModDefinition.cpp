#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClassModDefinition(py::module &m)
{
    py::class_< UClassModDefinition,  UEquipableItemDefinition   >(m, "UClassModDefinition")
        .def_readwrite("ManufacturerOverride", &UClassModDefinition::ManufacturerOverride)
        .def_readwrite("DisplayClassModAtBeginningOfName", &UClassModDefinition::DisplayClassModAtBeginningOfName)
        .def("StaticClass", &UClassModDefinition::StaticClass, py::return_value_policy::reference)
        .def("DisplayTitleAtEnd", &UClassModDefinition::DisplayTitleAtEnd)
        .def("GetManufacturerOverrideOrDefault", &UClassModDefinition::GetManufacturerOverrideOrDefault, py::return_value_policy::reference)
        .def("GetEquipmentLocation", &UClassModDefinition::GetEquipmentLocation)
        .def("PlayerClassRequirementMet", &UClassModDefinition::PlayerClassRequirementMet)
          ;
}
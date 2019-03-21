#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUsableCustomizationItemDefinition(py::object m)
{
    py::class_< UUsableCustomizationItemDefinition,  UUsableItemDefinition   >(m, "UUsableCustomizationItemDefinition")
        .def_readwrite("OverridePool", &UUsableCustomizationItemDefinition::OverridePool)
        .def_readwrite("CustomizationDef", &UUsableCustomizationItemDefinition::CustomizationDef)
        .def_readwrite("PrimaryColor", &UUsableCustomizationItemDefinition::PrimaryColor)
        .def_readwrite("SecondaryColor", &UUsableCustomizationItemDefinition::SecondaryColor)
        .def_readwrite("TertiaryColor", &UUsableCustomizationItemDefinition::TertiaryColor)
        .def_readwrite("ItemCardTopStatString", &UUsableCustomizationItemDefinition::ItemCardTopStatString)
        .def("StaticClass", &UUsableCustomizationItemDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetCustomizationDefinitionToUnlock", &UUsableCustomizationItemDefinition::GetCustomizationDefinitionToUnlock, py::return_value_policy::reference)
          ;
}
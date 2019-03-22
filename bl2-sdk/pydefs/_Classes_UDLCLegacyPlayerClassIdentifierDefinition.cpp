#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDLCLegacyPlayerClassIdentifierDefinition(py::module &m)
{
    py::class_< UDLCLegacyPlayerClassIdentifierDefinition,  UGBXDefinition   >(m, "UDLCLegacyPlayerClassIdentifierDefinition")
        .def_readwrite("CharacterCustomizations", &UDLCLegacyPlayerClassIdentifierDefinition::CharacterCustomizations)
        .def_readwrite("AssociatedPlayerClassIdentifierPath", &UDLCLegacyPlayerClassIdentifierDefinition::AssociatedPlayerClassIdentifierPath)
        .def_readwrite("AsterClassMods", &UDLCLegacyPlayerClassIdentifierDefinition::AsterClassMods)
        .def_readwrite("LobeliaClassMods", &UDLCLegacyPlayerClassIdentifierDefinition::LobeliaClassMods)
        .def("StaticClass", &UDLCLegacyPlayerClassIdentifierDefinition::StaticClass, py::return_value_policy::reference)
          ;
}
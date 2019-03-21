#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDLCLegacyPlayerClassIdentifierDefinition()
{
    class_< UDLCLegacyPlayerClassIdentifierDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UDLCLegacyPlayerClassIdentifierDefinition", no_init)
        .def_readwrite("CharacterCustomizations", &UDLCLegacyPlayerClassIdentifierDefinition::CharacterCustomizations)
        .def_readwrite("AssociatedPlayerClassIdentifierPath", &UDLCLegacyPlayerClassIdentifierDefinition::AssociatedPlayerClassIdentifierPath)
        .def_readwrite("AsterClassMods", &UDLCLegacyPlayerClassIdentifierDefinition::AsterClassMods)
        .def_readwrite("LobeliaClassMods", &UDLCLegacyPlayerClassIdentifierDefinition::LobeliaClassMods)
        .def("StaticClass", &UDLCLegacyPlayerClassIdentifierDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
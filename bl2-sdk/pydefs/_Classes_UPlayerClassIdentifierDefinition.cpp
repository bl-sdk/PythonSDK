#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerClassIdentifierDefinition()
{
    class_< UPlayerClassIdentifierDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UPlayerClassIdentifierDefinition", no_init)
        .def_readwrite("VfTable_IIDlcLicensableObject", &UPlayerClassIdentifierDefinition::VfTable_IIDlcLicensableObject)
        .def_readwrite("ClassName", &UPlayerClassIdentifierDefinition::ClassName)
        .def_readwrite("LocalizedClassName", &UPlayerClassIdentifierDefinition::LocalizedClassName)
        .def_readwrite("LocalizedClassNameNonCaps", &UPlayerClassIdentifierDefinition::LocalizedClassNameNonCaps)
        .def_readwrite("StatPlayerFirstSkillPoint", &UPlayerClassIdentifierDefinition::StatPlayerFirstSkillPoint)
        .def_readwrite("DlcCharacterDef", &UPlayerClassIdentifierDefinition::DlcCharacterDef)
        .def_readwrite("ClassDropInitializationDefinition", &UPlayerClassIdentifierDefinition::ClassDropInitializationDefinition)
        .def_readwrite("CommonClassMods", &UPlayerClassIdentifierDefinition::CommonClassMods)
        .def_readwrite("UncommonClassMods", &UPlayerClassIdentifierDefinition::UncommonClassMods)
        .def_readwrite("RareClassMods", &UPlayerClassIdentifierDefinition::RareClassMods)
        .def_readwrite("VeryRareClassMods", &UPlayerClassIdentifierDefinition::VeryRareClassMods)
        .def_readwrite("LegendaryClassMods", &UPlayerClassIdentifierDefinition::LegendaryClassMods)
        .def_readwrite("SlayerOfTerramorphousClassMods", &UPlayerClassIdentifierDefinition::SlayerOfTerramorphousClassMods)
        .def_readwrite("AsterClassMods", &UPlayerClassIdentifierDefinition::AsterClassMods)
        .def_readwrite("LobeliaClassMods", &UPlayerClassIdentifierDefinition::LobeliaClassMods)
        .def_readwrite("CharacterCustomizations", &UPlayerClassIdentifierDefinition::CharacterCustomizations)
        .def("StaticClass", &UPlayerClassIdentifierDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDownloadableContentDefinition", &UPlayerClassIdentifierDefinition::GetDownloadableContentDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
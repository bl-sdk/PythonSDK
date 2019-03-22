#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerClassIdentifierDefinition(py::module &m)
{
    py::class_< UPlayerClassIdentifierDefinition,  UGBXDefinition   >(m, "UPlayerClassIdentifierDefinition")
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
        .def("StaticClass", &UPlayerClassIdentifierDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetDownloadableContentDefinition", &UPlayerClassIdentifierDefinition::GetDownloadableContentDefinition, py::return_value_policy::reference)
          ;
}
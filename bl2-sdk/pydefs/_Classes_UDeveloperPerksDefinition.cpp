#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDeveloperPerksDefinition()
{
    class_< UDeveloperPerksDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UDeveloperPerksDefinition", no_init)
        .def_readwrite("DeveloperInfo", &UDeveloperPerksDefinition::DeveloperInfo)
        .def_readwrite("PerkInfo", &UDeveloperPerksDefinition::PerkInfo)
        .def_readwrite("DeveloperCustomizationUnlocks", &UDeveloperPerksDefinition::DeveloperCustomizationUnlocks)
        .def_readwrite("PatchedPerkInfo", &UDeveloperPerksDefinition::PatchedPerkInfo)
        .def("StaticClass", &UDeveloperPerksDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("CheckUnlockGamerpics", &UDeveloperPerksDefinition::CheckUnlockGamerpics)
        .def("IsDeveloper", &UDeveloperPerksDefinition::IsDeveloper)
        .def("IsValidPlatform", &UDeveloperPerksDefinition::IsValidPlatform)
        .def("CheckForButtonChain", &UDeveloperPerksDefinition::CheckForButtonChain)
        .def("PopulatePatchedPerkInfo", &UDeveloperPerksDefinition::PopulatePatchedPerkInfo)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowClassMod()
{
    class_< AWillowClassMod, bases< AWillowEquipAbleItem >  , boost::noncopyable>("AWillowClassMod", no_init)
        .def_readwrite("ClassRequirementMetString", &AWillowClassMod::ClassRequirementMetString)
        .def_readwrite("ClassRequirementNotMetString", &AWillowClassMod::ClassRequirementNotMetString)
        .def("StaticClass", &AWillowClassMod::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetItemCardTopSectionString", &AWillowClassMod::GetItemCardTopSectionString)
        .def("GetInventoryStatNumberData", &AWillowClassMod::GetInventoryStatNumberData)
        .def("GetHolsteredGearLikenessType", &AWillowClassMod::GetHolsteredGearLikenessType)
        .def("GetAttributePresentationOverride", &AWillowClassMod::GetAttributePresentationOverride, return_value_policy< reference_existing_object >())
        .def("IsModifyingSkill", &AWillowClassMod::IsModifyingSkill)
        .def("eventGetClassModIconLabel", &AWillowClassMod::eventGetClassModIconLabel)
        .def("ValidateDefinitions", &AWillowClassMod::ValidateDefinitions)
        .def("GetEquippedStat", &AWillowClassMod::GetEquippedStat)
        .def("eventGetEquipmentLocation", &AWillowClassMod::eventGetEquipmentLocation)
        .staticmethod("StaticClass")
  ;
}
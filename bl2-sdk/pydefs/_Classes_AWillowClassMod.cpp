#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowClassMod(py::module &m)
{
    py::class_< AWillowClassMod,  AWillowEquipAbleItem   >(m, "AWillowClassMod")
        .def_readwrite("ClassRequirementMetString", &AWillowClassMod::ClassRequirementMetString)
        .def_readwrite("ClassRequirementNotMetString", &AWillowClassMod::ClassRequirementNotMetString)
        .def("StaticClass", &AWillowClassMod::StaticClass, py::return_value_policy::reference)
        .def("GetItemCardTopSectionString", &AWillowClassMod::GetItemCardTopSectionString)
        .def("GetInventoryStatNumberData", &AWillowClassMod::GetInventoryStatNumberData)
        .def("GetHolsteredGearLikenessType", &AWillowClassMod::GetHolsteredGearLikenessType)
        .def("GetAttributePresentationOverride", &AWillowClassMod::GetAttributePresentationOverride, py::return_value_policy::reference)
        .def("IsModifyingSkill", &AWillowClassMod::IsModifyingSkill)
        .def("eventGetClassModIconLabel", &AWillowClassMod::eventGetClassModIconLabel)
        .def("ValidateDefinitions", &AWillowClassMod::ValidateDefinitions)
        .def("GetEquippedStat", &AWillowClassMod::GetEquippedStat)
        .def("eventGetEquipmentLocation", &AWillowClassMod::eventGetEquipmentLocation)
          ;
}
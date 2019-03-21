#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIItemCardable()
{
    class_< UIItemCardable, bases< UInterface >  , boost::noncopyable>("UIItemCardable", no_init)
        .def("StaticClass", &UIItemCardable::StaticClass, return_value_policy< reference_existing_object >())
        .def("IsUsefulToThisPlayer", &UIItemCardable::IsUsefulToThisPlayer)
        .def("IsReadied", &UIItemCardable::IsReadied)
        .def("GetDLCRestrictedMessage", &UIItemCardable::GetDLCRestrictedMessage)
        .def("IsDLCRequirementMet", &UIItemCardable::IsDLCRequirementMet)
        .def("IsLevelRequirementMet", &UIItemCardable::IsLevelRequirementMet)
        .def("GetMonetaryValue", &UIItemCardable::GetMonetaryValue)
        .def("GetCurrencyTypeInventoryIsValuedIn", &UIItemCardable::GetCurrencyTypeInventoryIsValuedIn)
        .def("GetElementalFrame", &UIItemCardable::GetElementalFrame)
        .def("GetZippyFrame", &UIItemCardable::GetZippyFrame)
        .def("GetRarityLevel", &UIItemCardable::GetRarityLevel)
        .def("GetShortHumanReadableName", &UIItemCardable::GetShortHumanReadableName)
        .def("GetManufacturer", &UIItemCardable::GetManufacturer, return_value_policy< reference_existing_object >())
        .def("GenerateFunStatsText", &UIItemCardable::GenerateFunStatsText)
        .def("GetInventoryStatTextData", &UIItemCardable::GetInventoryStatTextData)
        .def("GetInventoryStatNumberData", &UIItemCardable::GetInventoryStatNumberData)
        .staticmethod("StaticClass")
  ;
}
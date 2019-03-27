#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIItemCardable(py::module &m)
{
    py::class_< UIItemCardable,  UInterface   >(m, "UIItemCardable")
		.def_static("StaticClass", &UIItemCardable::StaticClass, py::return_value_policy::reference)
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
        .def("GetManufacturer", &UIItemCardable::GetManufacturer, py::return_value_policy::reference)
        .def("GenerateFunStatsText", &UIItemCardable::GenerateFunStatsText)
        .def("GetInventoryStatTextData", &UIItemCardable::GetInventoryStatTextData)
        .def("GetInventoryStatNumberData", &UIItemCardable::GetInventoryStatNumberData)
          ;
}
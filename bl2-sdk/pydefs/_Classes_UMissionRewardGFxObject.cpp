#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionRewardGFxObject(py::module &m)
{
    py::class_< UMissionRewardGFxObject,  UGFxObject   >(m, "UMissionRewardGFxObject")
        .def_readwrite("RewardData", &UMissionRewardGFxObject::RewardData)
        .def_readwrite("OwningMovie", &UMissionRewardGFxObject::OwningMovie)
        .def_readwrite("CardContents", &UMissionRewardGFxObject::CardContents)
        .def_readwrite("RTM", &UMissionRewardGFxObject::RTM)
        .def_readwrite("ItemCard", &UMissionRewardGFxObject::ItemCard)
        .def_readwrite("Header_Experience", &UMissionRewardGFxObject::Header_Experience)
        .def_readwrite("Header_Money", &UMissionRewardGFxObject::Header_Money)
        .def_readwrite("Header_Gear", &UMissionRewardGFxObject::Header_Gear)
        .def_readwrite("Header_Or", &UMissionRewardGFxObject::Header_Or)
        .def_readwrite("RewardChoiceFocused", &UMissionRewardGFxObject::RewardChoiceFocused)
        .def("DestroyPreviewInventory", &UMissionRewardGFxObject::DestroyPreviewInventory)
        .def("Interrupted", &UMissionRewardGFxObject::Interrupted)
        .def("SetTooltips", &UMissionRewardGFxObject::SetTooltips)
        .def("InspectItem", &UMissionRewardGFxObject::InspectItem)
        .def("GetSelectedThing", &UMissionRewardGFxObject::GetSelectedThing, py::return_value_policy::reference)
        .def("PanelOnInputKey", &UMissionRewardGFxObject::PanelOnInputKey)
        .def("SetCellInfo", &UMissionRewardGFxObject::SetCellInfo)
        .def("RemoveEventListeners", &UMissionRewardGFxObject::RemoveEventListeners)
        .def("OnClickedChoice", &UMissionRewardGFxObject::OnClickedChoice)
        .def("OnRolloverChoice", &UMissionRewardGFxObject::OnRolloverChoice)
        .def("OnFocusedChoice", &UMissionRewardGFxObject::OnFocusedChoice)
        .def("AcceptReward", &UMissionRewardGFxObject::AcceptReward)
        .def("ConfigureForPlayer", &UMissionRewardGFxObject::ConfigureForPlayer)
        .def("SetNumItemChoices", &UMissionRewardGFxObject::SetNumItemChoices)
        .def("SpawnInventoryForRewardUI", &UMissionRewardGFxObject::SpawnInventoryForRewardUI, py::return_value_policy::reference)
        .def("SetUpRewardsPageItems", &UMissionRewardGFxObject::SetUpRewardsPageItems)
        .def("GetNumItems", &UMissionRewardGFxObject::GetNumItems)
        .def("SetPlotCritical", &UMissionRewardGFxObject::SetPlotCritical)
        .def("SetUpRewardsPage", &UMissionRewardGFxObject::SetUpRewardsPage)
        .def("FreeCellData", &UMissionRewardGFxObject::FreeCellData)
        .def("InitCellData", &UMissionRewardGFxObject::InitCellData)
        .def("SetNoReward", &UMissionRewardGFxObject::SetNoReward)
        .def("SetPendingMissionRewardData", &UMissionRewardGFxObject::SetPendingMissionRewardData)
        .def("Init", &UMissionRewardGFxObject::Init)
          ;
}
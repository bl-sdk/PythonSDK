#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderGamepadOptions(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderGamepadOptions,  UWillowScrollingListDataProviderOptionsBase   >(m, "UWillowScrollingListDataProviderGamepadOptions")
        .def_readwrite("KeyCaptionList", &UWillowScrollingListDataProviderGamepadOptions::KeyCaptionList)
        .def_readwrite("ControllerPresetTags", &UWillowScrollingListDataProviderGamepadOptions::ControllerPresetTags)
        .def_readwrite("ControllerPresetNames", &UWillowScrollingListDataProviderGamepadOptions::ControllerPresetNames)
        .def_readwrite("ControllerMappingClip", &UWillowScrollingListDataProviderGamepadOptions::ControllerMappingClip)
        .def_readwrite("KeyTextFieldList", &UWillowScrollingListDataProviderGamepadOptions::KeyTextFieldList)
        .def_readwrite("PresetNameField", &UWillowScrollingListDataProviderGamepadOptions::PresetNameField)
        .def_readwrite("MyOptionsGFxMovie", &UWillowScrollingListDataProviderGamepadOptions::MyOptionsGFxMovie)
        .def_readwrite("CustomPresetIndex", &UWillowScrollingListDataProviderGamepadOptions::CustomPresetIndex)
        .def_readwrite("CurrentSelectedPresetIndex", &UWillowScrollingListDataProviderGamepadOptions::CurrentSelectedPresetIndex)
        .def_readwrite("WPI", &UWillowScrollingListDataProviderGamepadOptions::WPI)
        .def_readwrite("MyWillowScrollingList", &UWillowScrollingListDataProviderGamepadOptions::MyWillowScrollingList)
        .def_readwrite("Platform", &UWillowScrollingListDataProviderGamepadOptions::Platform)
        .def_readwrite("NonCustomizedPresetIndex", &UWillowScrollingListDataProviderGamepadOptions::NonCustomizedPresetIndex)
        .def_readwrite("FirstButtonName", &UWillowScrollingListDataProviderGamepadOptions::FirstButtonName)
        .def_readwrite("SecondButtonName", &UWillowScrollingListDataProviderGamepadOptions::SecondButtonName)
        .def("UpdatePresetCaptions", &UWillowScrollingListDataProviderGamepadOptions::UpdatePresetCaptions)
        .def("InitControllerMapping", &UWillowScrollingListDataProviderGamepadOptions::InitControllerMapping)
        .def("HideControllerMapping", &UWillowScrollingListDataProviderGamepadOptions::HideControllerMapping)
        .def("GetIndexForButton", &UWillowScrollingListDataProviderGamepadOptions::GetIndexForButton)
        .def("StartCustomizeMode", &UWillowScrollingListDataProviderGamepadOptions::StartCustomizeMode)
        .def("HandleExitWarnDlgInputKey", &UWillowScrollingListDataProviderGamepadOptions::HandleExitWarnDlgInputKey)
        .def("DisplayExitWarnDialog", &UWillowScrollingListDataProviderGamepadOptions::DisplayExitWarnDialog)
        .def("HandleClobberDlgInputKey", &UWillowScrollingListDataProviderGamepadOptions::HandleClobberDlgInputKey)
        .def("HandleInputKey", &UWillowScrollingListDataProviderGamepadOptions::HandleInputKey)
        .def("EncodeButton", &UWillowScrollingListDataProviderGamepadOptions::EncodeButton)
        .def("CreateControllerRebindingString", &UWillowScrollingListDataProviderGamepadOptions::CreateControllerRebindingString)
        .def("OnPop", &UWillowScrollingListDataProviderGamepadOptions::OnPop)
        .def("Cleanup", &UWillowScrollingListDataProviderGamepadOptions::Cleanup)
        .def("HandleSelectionRollover", &UWillowScrollingListDataProviderGamepadOptions::HandleSelectionRollover)
        .def("HandleSelectionChange", &UWillowScrollingListDataProviderGamepadOptions::HandleSelectionChange)
        .def("HandleSpinnerChange", &UWillowScrollingListDataProviderGamepadOptions::HandleSpinnerChange)
        .def("AddControllerPresets", &UWillowScrollingListDataProviderGamepadOptions::AddControllerPresets)
        .def("HandleCustomizeModeDlgInputKey", &UWillowScrollingListDataProviderGamepadOptions::HandleCustomizeModeDlgInputKey)
        .def("Populate", &UWillowScrollingListDataProviderGamepadOptions::Populate)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderKeyboardMouseOptions(py::object m)
{
    py::class_< UWillowScrollingListDataProviderKeyboardMouseOptions,  UWillowScrollingListDataProviderOptionsBase   >(m, "UWillowScrollingListDataProviderKeyboardMouseOptions")
        .def_readwrite("WPCOwner", &UWillowScrollingListDataProviderKeyboardMouseOptions::WPCOwner)
        .def_readwrite("ControllerMappingClip", &UWillowScrollingListDataProviderKeyboardMouseOptions::ControllerMappingClip)
        .def_readwrite("DeviceCollection", &UWillowScrollingListDataProviderKeyboardMouseOptions::DeviceCollection)
        .def_readwrite("KeyBinds", &UWillowScrollingListDataProviderKeyboardMouseOptions::KeyBinds)
        .def_readwrite("CurrentKeyBindSelection", &UWillowScrollingListDataProviderKeyboardMouseOptions::CurrentKeyBindSelection)
        .def("StaticClass", &UWillowScrollingListDataProviderKeyboardMouseOptions::StaticClass, py::return_value_policy::reference)
        .def("ShowControllerMapping", &UWillowScrollingListDataProviderKeyboardMouseOptions::ShowControllerMapping)
        .def("OnPop", &UWillowScrollingListDataProviderKeyboardMouseOptions::OnPop)
        .def("Cleanup", &UWillowScrollingListDataProviderKeyboardMouseOptions::Cleanup)
        .def("HandleClick", &UWillowScrollingListDataProviderKeyboardMouseOptions::HandleClick)
        .def("HandleSelectionRollover", &UWillowScrollingListDataProviderKeyboardMouseOptions::HandleSelectionRollover)
        .def("HandleSelectionChange", &UWillowScrollingListDataProviderKeyboardMouseOptions::HandleSelectionChange)
        .def("OnResetKeyBindsButtonClicked", &UWillowScrollingListDataProviderKeyboardMouseOptions::OnResetKeyBindsButtonClicked)
        .def("HandleKeySwapDialog", &UWillowScrollingListDataProviderKeyboardMouseOptions::HandleKeySwapDialog)
        .def("BindCurrentSelection", &UWillowScrollingListDataProviderKeyboardMouseOptions::BindCurrentSelection)
        .def("HandleBindInputKey", &UWillowScrollingListDataProviderKeyboardMouseOptions::HandleBindInputKey)
        .def("DoBind", &UWillowScrollingListDataProviderKeyboardMouseOptions::DoBind)
        .def("AllowBindKey", &UWillowScrollingListDataProviderKeyboardMouseOptions::AllowBindKey)
        .def("IsGamepadKey", &UWillowScrollingListDataProviderKeyboardMouseOptions::IsGamepadKey)
        .def("GetLocalizedKeyName", &UWillowScrollingListDataProviderKeyboardMouseOptions::GetLocalizedKeyName)
        .def("FindBinding", &UWillowScrollingListDataProviderKeyboardMouseOptions::FindBinding)
        .def("AddKeyBindEntry", &UWillowScrollingListDataProviderKeyboardMouseOptions::AddKeyBindEntry)
        .def("AddAxisButtonBinding", &UWillowScrollingListDataProviderKeyboardMouseOptions::AddAxisButtonBinding)
        .def("GetAxisButtonCaption", &UWillowScrollingListDataProviderKeyboardMouseOptions::GetAxisButtonCaption)
        .def("AddButtonBinding", &UWillowScrollingListDataProviderKeyboardMouseOptions::AddButtonBinding)
        .def("GetButtonCaption", &UWillowScrollingListDataProviderKeyboardMouseOptions::GetButtonCaption)
        .def("GetActionNameForButton", &UWillowScrollingListDataProviderKeyboardMouseOptions::GetActionNameForButton)
        .def("extOnPopulateKeys", &UWillowScrollingListDataProviderKeyboardMouseOptions::extOnPopulateKeys)
        .def("extOnKeySelectionChange", &UWillowScrollingListDataProviderKeyboardMouseOptions::extOnKeySelectionChange)
        .def("extOnKeyClicked", &UWillowScrollingListDataProviderKeyboardMouseOptions::extOnKeyClicked)
        .def("InitKeyBinding", &UWillowScrollingListDataProviderKeyboardMouseOptions::InitKeyBinding)
        .def("InitDeviceCollection", &UWillowScrollingListDataProviderKeyboardMouseOptions::InitDeviceCollection)
        .def("Populate", &UWillowScrollingListDataProviderKeyboardMouseOptions::Populate)
          ;
}
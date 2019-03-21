#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowGFxEditDialog()
{
    class_< UWillowGFxEditDialog, bases< UWillowGFxMovie >  , boost::noncopyable>("UWillowGFxEditDialog", no_init)
        .def_readwrite("Tools", &UWillowGFxEditDialog::Tools)
        .def_readwrite("MenuItemCallbacks", &UWillowGFxEditDialog::MenuItemCallbacks)
        .def("StaticClass", &UWillowGFxEditDialog::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDefaultEditBoxValue", &UWillowGFxEditDialog::GetDefaultEditBoxValue)
        .def("DisplayOkBox", &UWillowGFxEditDialog::DisplayOkBox)
        .def("extMenuItemClicked", &UWillowGFxEditDialog::extMenuItemClicked)
        .def("GetEditBoxValueForTag", &UWillowGFxEditDialog::GetEditBoxValueForTag)
        .def("SetDialogueText", &UWillowGFxEditDialog::SetDialogueText)
        .def("SetCaptionText", &UWillowGFxEditDialog::SetCaptionText)
        .def("ApplyLayout", &UWillowGFxEditDialog::ApplyLayout)
        .def("AddMenuItem", &UWillowGFxEditDialog::AddMenuItem)
        .def("AddEditItem", &UWillowGFxEditDialog::AddEditItem)
        .def("HandleInputKey", &UWillowGFxEditDialog::HandleInputKey)
        .def("GetLocalPlayerID", &UWillowGFxEditDialog::GetLocalPlayerID)
        .def("eventOnClose", &UWillowGFxEditDialog::eventOnClose)
        .def("eventStart", &UWillowGFxEditDialog::eventStart)
        .def("OnMenuItemClicked", &UWillowGFxEditDialog::OnMenuItemClicked)
        .staticmethod("StaticClass")
  ;
}
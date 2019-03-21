#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UITwoPanelInterface()
{
    class_< UITwoPanelInterface, bases< UInterface >  , boost::noncopyable>("UITwoPanelInterface", no_init)
        .def("StaticClass", &UITwoPanelInterface::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnCellPressed", &UITwoPanelInterface::OnCellPressed)
        .def("OnLeftPanelInit", &UITwoPanelInterface::OnLeftPanelInit)
        .def("SetItemLocation", &UITwoPanelInterface::SetItemLocation)
        .def("PanelOnItemSelected", &UITwoPanelInterface::PanelOnItemSelected)
        .def("ShouldStoragePanelHighlightFrozen", &UITwoPanelInterface::ShouldStoragePanelHighlightFrozen)
        .def("GetEquippedAnalogue", &UITwoPanelInterface::GetEquippedAnalogue, return_value_policy< reference_existing_object >())
        .def("GetSelectedThing", &UITwoPanelInterface::GetSelectedThing, return_value_policy< reference_existing_object >())
        .def("GetPlayerPanelLabel", &UITwoPanelInterface::GetPlayerPanelLabel)
        .def("GetStoragePanelLabel", &UITwoPanelInterface::GetStoragePanelLabel)
        .def("ShouldShowPanelNavTooltips", &UITwoPanelInterface::ShouldShowPanelNavTooltips)
        .def("NotifySelectionChange", &UITwoPanelInterface::NotifySelectionChange)
        .def("GetCurrencyTypeForInventory", &UITwoPanelInterface::GetCurrencyTypeForInventory)
        .def("GetOverridePriceForInventory", &UITwoPanelInterface::GetOverridePriceForInventory)
        .def("GetSortConfigDataForPanel", &UITwoPanelInterface::GetSortConfigDataForPanel)
        .def("GetStorageReferenceForTransferring", &UITwoPanelInterface::GetStorageReferenceForTransferring, return_value_policy< reference_existing_object >())
        .def("GetStorageReferenceForSwapping", &UITwoPanelInterface::GetStorageReferenceForSwapping, return_value_policy< reference_existing_object >())
        .def("GetPlayerPanelItems", &UITwoPanelInterface::GetPlayerPanelItems)
        .def("GetStoragePanelItems", &UITwoPanelInterface::GetStoragePanelItems)
        .def("GetTitle", &UITwoPanelInterface::GetTitle)
        .def("ShouldStartOnLeftPanel", &UITwoPanelInterface::ShouldStartOnLeftPanel)
        .staticmethod("StaticClass")
  ;
}
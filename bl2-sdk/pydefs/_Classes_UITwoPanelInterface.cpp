#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UITwoPanelInterface()
{
    py::class_< UITwoPanelInterface,  UInterface   >("UITwoPanelInterface")
        .def("StaticClass", &UITwoPanelInterface::StaticClass, py::return_value_policy::reference)
        .def("OnCellPressed", &UITwoPanelInterface::OnCellPressed)
        .def("OnLeftPanelInit", &UITwoPanelInterface::OnLeftPanelInit)
        .def("SetItemLocation", &UITwoPanelInterface::SetItemLocation)
        .def("PanelOnItemSelected", &UITwoPanelInterface::PanelOnItemSelected)
        .def("ShouldStoragePanelHighlightFrozen", &UITwoPanelInterface::ShouldStoragePanelHighlightFrozen)
        .def("GetEquippedAnalogue", &UITwoPanelInterface::GetEquippedAnalogue, py::return_value_policy::reference)
        .def("GetSelectedThing", &UITwoPanelInterface::GetSelectedThing, py::return_value_policy::reference)
        .def("GetPlayerPanelLabel", &UITwoPanelInterface::GetPlayerPanelLabel)
        .def("GetStoragePanelLabel", &UITwoPanelInterface::GetStoragePanelLabel)
        .def("ShouldShowPanelNavTooltips", &UITwoPanelInterface::ShouldShowPanelNavTooltips)
        .def("NotifySelectionChange", &UITwoPanelInterface::NotifySelectionChange)
        .def("GetCurrencyTypeForInventory", &UITwoPanelInterface::GetCurrencyTypeForInventory)
        .def("GetOverridePriceForInventory", &UITwoPanelInterface::GetOverridePriceForInventory)
        .def("GetSortConfigDataForPanel", &UITwoPanelInterface::GetSortConfigDataForPanel)
        .def("GetStorageReferenceForTransferring", &UITwoPanelInterface::GetStorageReferenceForTransferring, py::return_value_policy::reference)
        .def("GetStorageReferenceForSwapping", &UITwoPanelInterface::GetStorageReferenceForSwapping, py::return_value_policy::reference)
        .def("GetPlayerPanelItems", &UITwoPanelInterface::GetPlayerPanelItems)
        .def("GetStoragePanelItems", &UITwoPanelInterface::GetStoragePanelItems)
        .def("GetTitle", &UITwoPanelInterface::GetTitle)
        .def("ShouldStartOnLeftPanel", &UITwoPanelInterface::ShouldStartOnLeftPanel)
        .staticmethod("StaticClass")
  ;
}
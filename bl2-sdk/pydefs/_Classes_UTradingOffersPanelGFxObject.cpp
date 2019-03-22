#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTradingOffersPanelGFxObject(py::module &m)
{
    py::class_< UTradingOffersPanelGFxObject,  UBaseInventoryPanelGFxObject   >(m, "UTradingOffersPanelGFxObject")
        .def_readwrite("SelectedCellSuffix", &UTradingOffersPanelGFxObject::SelectedCellSuffix)
        .def_readwrite("NonCellButtonFocused", &UTradingOffersPanelGFxObject::NonCellButtonFocused)
        .def_readwrite("OfferingThing", &UTradingOffersPanelGFxObject::OfferingThing)
        .def("CleanUpAfterCancelledDrag", &UTradingOffersPanelGFxObject::CleanUpAfterCancelledDrag)
        .def("PrepareForFinishDrag", &UTradingOffersPanelGFxObject::PrepareForFinishDrag)
        .def("CanFinishDragOnCell", &UTradingOffersPanelGFxObject::CanFinishDragOnCell)
        .def("OnStartDrag", &UTradingOffersPanelGFxObject::OnStartDrag)
        .def("extOnTrashFavChanged", &UTradingOffersPanelGFxObject::extOnTrashFavChanged)
        .def("GetMarkFromInventory", &UTradingOffersPanelGFxObject::GetMarkFromInventory)
        .def("SetCellInfo", &UTradingOffersPanelGFxObject::SetCellInfo)
        .def("GetCellSuffixBasedOnThing", &UTradingOffersPanelGFxObject::GetCellSuffixBasedOnThing)
        .def("CancelOffer", &UTradingOffersPanelGFxObject::CancelOffer)
        .def("StopOffer", &UTradingOffersPanelGFxObject::StopOffer)
        .def("StartOffer", &UTradingOffersPanelGFxObject::StartOffer)
        .def("CanUseCLIKButtons", &UTradingOffersPanelGFxObject::CanUseCLIKButtons)
        .def("CanStartOffer", &UTradingOffersPanelGFxObject::CanStartOffer)
        .def("OfferingMove", &UTradingOffersPanelGFxObject::OfferingMove)
        .def("SetSelectedButton", &UTradingOffersPanelGFxObject::SetSelectedButton)
        .def("ButtonsMove", &UTradingOffersPanelGFxObject::ButtonsMove)
        .def("CellMove", &UTradingOffersPanelGFxObject::CellMove)
        .def("GetCurrentSelectedButton", &UTradingOffersPanelGFxObject::GetCurrentSelectedButton, py::return_value_policy::reference)
        .def("GetCurrentSelectedCell", &UTradingOffersPanelGFxObject::GetCurrentSelectedCell, py::return_value_policy::reference)
        .def("extOnCellSelected", &UTradingOffersPanelGFxObject::extOnCellSelected)
        .def("GetThingByIndex", &UTradingOffersPanelGFxObject::GetThingByIndex, py::return_value_policy::reference)
        .def("GetSelectedThing", &UTradingOffersPanelGFxObject::GetSelectedThing, py::return_value_policy::reference)
        .def("SetSelectedCell", &UTradingOffersPanelGFxObject::SetSelectedCell)
        .def("PanelOnInputKey", &UTradingOffersPanelGFxObject::PanelOnInputKey)
        .def("BlockInput", &UTradingOffersPanelGFxObject::BlockInput)
        .def("DeferInput", &UTradingOffersPanelGFxObject::DeferInput)
        .def("Init", &UTradingOffersPanelGFxObject::Init)
        .def("MoveFunction", &UTradingOffersPanelGFxObject::MoveFunction)
          ;
}
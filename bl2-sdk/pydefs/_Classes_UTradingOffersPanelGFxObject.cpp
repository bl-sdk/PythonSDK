#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTradingOffersPanelGFxObject()
{
    class_< UTradingOffersPanelGFxObject, bases< UBaseInventoryPanelGFxObject >  , boost::noncopyable>("UTradingOffersPanelGFxObject", no_init)
        .def_readwrite("SelectedCellSuffix", &UTradingOffersPanelGFxObject::SelectedCellSuffix)
        .def_readwrite("NonCellButtonFocused", &UTradingOffersPanelGFxObject::NonCellButtonFocused)
        .def_readwrite("OfferingThing", &UTradingOffersPanelGFxObject::OfferingThing)
        .def("StaticClass", &UTradingOffersPanelGFxObject::StaticClass, return_value_policy< reference_existing_object >())
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
        .def("GetCurrentSelectedButton", &UTradingOffersPanelGFxObject::GetCurrentSelectedButton, return_value_policy< reference_existing_object >())
        .def("GetCurrentSelectedCell", &UTradingOffersPanelGFxObject::GetCurrentSelectedCell, return_value_policy< reference_existing_object >())
        .def("extOnCellSelected", &UTradingOffersPanelGFxObject::extOnCellSelected)
        .def("GetThingByIndex", &UTradingOffersPanelGFxObject::GetThingByIndex, return_value_policy< reference_existing_object >())
        .def("GetSelectedThing", &UTradingOffersPanelGFxObject::GetSelectedThing, return_value_policy< reference_existing_object >())
        .def("SetSelectedCell", &UTradingOffersPanelGFxObject::SetSelectedCell)
        .def("PanelOnInputKey", &UTradingOffersPanelGFxObject::PanelOnInputKey)
        .def("BlockInput", &UTradingOffersPanelGFxObject::BlockInput)
        .def("DeferInput", &UTradingOffersPanelGFxObject::DeferInput)
        .def("Init", &UTradingOffersPanelGFxObject::Init)
        .def("MoveFunction", &UTradingOffersPanelGFxObject::MoveFunction)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULoadCharacterLobbyGFxObject()
{
    class_< ULoadCharacterLobbyGFxObject, bases< UGFxObject >  , boost::noncopyable>("ULoadCharacterLobbyGFxObject", no_init)
        .def("StaticClass", &ULoadCharacterLobbyGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetQuadrant", &ULoadCharacterLobbyGFxObject::SetQuadrant)
        .def("SetTooltips", &ULoadCharacterLobbyGFxObject::SetTooltips)
        .def("SetSlotData", &ULoadCharacterLobbyGFxObject::SetSlotData)
        .def("SetScrollArrows", &ULoadCharacterLobbyGFxObject::SetScrollArrows)
        .def("SetCharacterInfo", &ULoadCharacterLobbyGFxObject::SetCharacterInfo)
        .def("SelectSlotIndex", &ULoadCharacterLobbyGFxObject::SelectSlotIndex)
        .def("HideCharacterInfo", &ULoadCharacterLobbyGFxObject::HideCharacterInfo)
        .def("ClearSlots", &ULoadCharacterLobbyGFxObject::ClearSlots)
        .staticmethod("StaticClass")
  ;
}
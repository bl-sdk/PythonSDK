#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULoadCharacterLobbyGFxObject(py::module &m)
{
    py::class_< ULoadCharacterLobbyGFxObject,  UGFxObject   >(m, "ULoadCharacterLobbyGFxObject")
        .def("StaticClass", &ULoadCharacterLobbyGFxObject::StaticClass, py::return_value_policy::reference)
        .def("SetQuadrant", &ULoadCharacterLobbyGFxObject::SetQuadrant)
        .def("SetTooltips", &ULoadCharacterLobbyGFxObject::SetTooltips)
        .def("SetSlotData", &ULoadCharacterLobbyGFxObject::SetSlotData)
        .def("SetScrollArrows", &ULoadCharacterLobbyGFxObject::SetScrollArrows)
        .def("SetCharacterInfo", &ULoadCharacterLobbyGFxObject::SetCharacterInfo)
        .def("SelectSlotIndex", &ULoadCharacterLobbyGFxObject::SelectSlotIndex)
        .def("HideCharacterInfo", &ULoadCharacterLobbyGFxObject::HideCharacterInfo)
        .def("ClearSlots", &ULoadCharacterLobbyGFxObject::ClearSlots)
          ;
}
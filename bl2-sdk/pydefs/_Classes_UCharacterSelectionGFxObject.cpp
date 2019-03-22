#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCharacterSelectionGFxObject(py::module &m)
{
    py::class_< UCharacterSelectionGFxObject,  UGFxObject   >(m, "UCharacterSelectionGFxObject")
        .def("StaticClass", &UCharacterSelectionGFxObject::StaticClass, py::return_value_policy::reference)
        .def("FadeIn", &UCharacterSelectionGFxObject::FadeIn)
        .def("BeginClose", &UCharacterSelectionGFxObject::BeginClose)
        .def("ConfigureForPause", &UCharacterSelectionGFxObject::ConfigureForPause)
        .def("SetTooltips", &UCharacterSelectionGFxObject::SetTooltips)
        .def("GetCharacterGridIndexInDirection", &UCharacterSelectionGFxObject::GetCharacterGridIndexInDirection)
        .def("SetMessageInfo", &UCharacterSelectionGFxObject::SetMessageInfo)
        .def("SetTimerInfo", &UCharacterSelectionGFxObject::SetTimerInfo)
        .def("SetSelectionIndicator", &UCharacterSelectionGFxObject::SetSelectionIndicator)
        .def("SetPartySelection", &UCharacterSelectionGFxObject::SetPartySelection)
        .def("ClearPartySelections", &UCharacterSelectionGFxObject::ClearPartySelections)
        .def("SetState", &UCharacterSelectionGFxObject::SetState)
        .def("SetCharacterInfo", &UCharacterSelectionGFxObject::SetCharacterInfo)
        .def("CommitSelectableCharacters", &UCharacterSelectionGFxObject::CommitSelectableCharacters)
        .def("AddSelectableCharacter", &UCharacterSelectionGFxObject::AddSelectableCharacter)
          ;
}
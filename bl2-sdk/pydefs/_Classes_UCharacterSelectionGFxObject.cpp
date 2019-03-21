#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCharacterSelectionGFxObject()
{
    class_< UCharacterSelectionGFxObject, bases< UGFxObject >  , boost::noncopyable>("UCharacterSelectionGFxObject", no_init)
        .def("StaticClass", &UCharacterSelectionGFxObject::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}
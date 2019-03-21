#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponProficiencyFeedbackMessage()
{
    py::class_< UWeaponProficiencyFeedbackMessage,  ULocalMessage   >("UWeaponProficiencyFeedbackMessage")
        .def_readwrite("IsNowLevel", &UWeaponProficiencyFeedbackMessage::IsNowLevel)
        .def("StaticClass", &UWeaponProficiencyFeedbackMessage::StaticClass, py::return_value_policy::reference)
        .def("GetMsgType", &UWeaponProficiencyFeedbackMessage::GetMsgType)
        .def("GetString", &UWeaponProficiencyFeedbackMessage::GetString)
        .staticmethod("StaticClass")
  ;
}
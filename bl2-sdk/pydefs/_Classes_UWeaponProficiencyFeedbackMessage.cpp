#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWeaponProficiencyFeedbackMessage(py::module &m)
{
    py::class_< UWeaponProficiencyFeedbackMessage,  ULocalMessage   >(m, "UWeaponProficiencyFeedbackMessage")
		.def_static("StaticClass", &UWeaponProficiencyFeedbackMessage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("IsNowLevel", &UWeaponProficiencyFeedbackMessage::IsNowLevel)
        .def("GetMsgType", &UWeaponProficiencyFeedbackMessage::GetMsgType)
        .def("GetString", &UWeaponProficiencyFeedbackMessage::GetString)
          ;
}
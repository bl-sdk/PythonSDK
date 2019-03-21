#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UExperienceFeedbackMessage(py::object m)
{
    py::class_< UExperienceFeedbackMessage,  ULocalMessage   >(m, "UExperienceFeedbackMessage")
        .def_readwrite("IsNowLevel", &UExperienceFeedbackMessage::IsNowLevel)
        .def("StaticClass", &UExperienceFeedbackMessage::StaticClass, py::return_value_policy::reference)
        .def("GetMsgType", &UExperienceFeedbackMessage::GetMsgType)
        .def("GetString", &UExperienceFeedbackMessage::GetString)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInjuredFeedbackMessage()
{
    py::class_< UInjuredFeedbackMessage,  UWillowLocalMessage   >("UInjuredFeedbackMessage")
        .def_readwrite("SecondWind", &UInjuredFeedbackMessage::SecondWind)
        .def("StaticClass", &UInjuredFeedbackMessage::StaticClass, py::return_value_policy::reference)
        .def("GetString", &UInjuredFeedbackMessage::GetString)
        .staticmethod("StaticClass")
  ;
}
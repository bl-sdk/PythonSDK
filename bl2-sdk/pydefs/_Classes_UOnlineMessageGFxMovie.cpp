#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineMessageGFxMovie()
{
    py::class_< UOnlineMessageGFxMovie,  UWillowGFxMovie   >("UOnlineMessageGFxMovie")
        .def_readwrite("BlockingMessageClip", &UOnlineMessageGFxMovie::BlockingMessageClip)
        .def_readwrite("NonBlockingMessageClip", &UOnlineMessageGFxMovie::NonBlockingMessageClip)
        .def_readwrite("BlockingSubtitle", &UOnlineMessageGFxMovie::BlockingSubtitle)
        .def("StaticClass", &UOnlineMessageGFxMovie::StaticClass, py::return_value_policy::reference)
        .def("extOnHideBegin", &UOnlineMessageGFxMovie::extOnHideBegin)
        .def("extOnlineMessageOnLoad", &UOnlineMessageGFxMovie::extOnlineMessageOnLoad)
        .def("UpdateAspectRatio", &UOnlineMessageGFxMovie::UpdateAspectRatio)
        .def("HACK_DontActuallyBlock", &UOnlineMessageGFxMovie::HACK_DontActuallyBlock)
        .def("SetBlocking", &UOnlineMessageGFxMovie::SetBlocking)
        .def("IsBlocking", &UOnlineMessageGFxMovie::IsBlocking)
        .def("DisplayMessageInternal", &UOnlineMessageGFxMovie::DisplayMessageInternal)
        .def("HideBlocking", &UOnlineMessageGFxMovie::HideBlocking)
        .def("Hide", &UOnlineMessageGFxMovie::Hide)
        .def("AppendSubtitle", &UOnlineMessageGFxMovie::AppendSubtitle)
        .def("DisplayMessageAndSubtitle", &UOnlineMessageGFxMovie::DisplayMessageAndSubtitle)
        .def("DisplayMessage", &UOnlineMessageGFxMovie::DisplayMessage)
        .def("DisplayBlockingMessage", &UOnlineMessageGFxMovie::DisplayBlockingMessage)
        .def("eventOnClose", &UOnlineMessageGFxMovie::eventOnClose)
        .def("eventStart", &UOnlineMessageGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}
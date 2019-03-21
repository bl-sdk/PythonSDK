#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlineMessageGFxMovie()
{
    class_< UOnlineMessageGFxMovie, bases< UWillowGFxMovie >  , boost::noncopyable>("UOnlineMessageGFxMovie", no_init)
        .def_readwrite("BlockingMessageClip", &UOnlineMessageGFxMovie::BlockingMessageClip)
        .def_readwrite("NonBlockingMessageClip", &UOnlineMessageGFxMovie::NonBlockingMessageClip)
        .def_readwrite("BlockingSubtitle", &UOnlineMessageGFxMovie::BlockingSubtitle)
        .def("StaticClass", &UOnlineMessageGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
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
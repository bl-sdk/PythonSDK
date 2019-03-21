#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UTextChatGFxMovie()
{
    class_< UTextChatGFxMovie, bases< UWillowGFxMovie >  , boost::noncopyable>("UTextChatGFxMovie", no_init)
        .def_readwrite("ChatObj", &UTextChatGFxMovie::ChatObj)
        .def("StaticClass", &UTextChatGFxMovie::StaticClass, return_value_policy< reference_existing_object >())
        .def("extTextChatOnLoad", &UTextChatGFxMovie::extTextChatOnLoad)
        .def("AddChatMessageInternal", &UTextChatGFxMovie::AddChatMessageInternal)
        .def("HandleTextChatInput", &UTextChatGFxMovie::HandleTextChatInput)
        .def("GetChatObjText", &UTextChatGFxMovie::GetChatObjText)
        .def("StopTextChatInternal", &UTextChatGFxMovie::StopTextChatInternal)
        .def("StartTextChatInternal", &UTextChatGFxMovie::StartTextChatInternal)
        .def("GetTimestampString", &UTextChatGFxMovie::GetTimestampString)
        .def("AddChatMessage", &UTextChatGFxMovie::AddChatMessage)
        .def("StartTextChat", &UTextChatGFxMovie::StartTextChat)
        .def("eventOnClose", &UTextChatGFxMovie::eventOnClose)
        .def("eventStart", &UTextChatGFxMovie::eventStart)
        .staticmethod("StaticClass")
  ;
}
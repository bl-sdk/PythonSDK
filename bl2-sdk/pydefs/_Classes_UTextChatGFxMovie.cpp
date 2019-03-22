#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UTextChatGFxMovie(py::module &m)
{
    py::class_< UTextChatGFxMovie,  UWillowGFxMovie   >(m, "UTextChatGFxMovie")
        .def_readwrite("ChatObj", &UTextChatGFxMovie::ChatObj)
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
          ;
}
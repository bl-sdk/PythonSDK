#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULocalMessage(py::module &m)
{
    py::class_< ULocalMessage,  UObject   >(m, "ULocalMessage")
		.def_static("StaticClass", &ULocalMessage::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Lifetime", &ULocalMessage::Lifetime)
        .def_readwrite("DrawColor", &ULocalMessage::DrawColor)
        .def_readwrite("MsgType", &ULocalMessage::MsgType)
        .def("PartiallyDuplicates", &ULocalMessage::PartiallyDuplicates)
        .def("IsConsoleMessage", &ULocalMessage::IsConsoleMessage)
        .def("GetLifeTime", &ULocalMessage::GetLifeTime)
        .def("GetColor", &ULocalMessage::GetColor)
        .def("GetConsoleColor", &ULocalMessage::GetConsoleColor)
        .def("GetString", &ULocalMessage::GetString)
        .def("GetMsgType", &ULocalMessage::GetMsgType)
        .def("ClientReceive", &ULocalMessage::ClientReceive)
          ;
}
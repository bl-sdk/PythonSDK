#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOpenedChestMessage(py::object m)
{
    py::class_< UOpenedChestMessage,  ULocalMessage   >(m, "UOpenedChestMessage")
        .def_readwrite("OpenedChest", &UOpenedChestMessage::OpenedChest)
        .def("StaticClass", &UOpenedChestMessage::StaticClass, py::return_value_policy::reference)
        .def("GetString", &UOpenedChestMessage::GetString)
        .def("CloseFontColorTag", &UWillowLocalMessage::CloseFontColorTag)
        .def("OpenFontColorTag", &UWillowLocalMessage::OpenFontColorTag)
        .def("TrimWhitespace", &UWillowLocalMessage::TrimWhitespace)
          ;
}
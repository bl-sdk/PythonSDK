#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOpenedChestMessage(py::module &m)
{
    py::class_< UOpenedChestMessage,  ULocalMessage   >(m, "UOpenedChestMessage")
        .def_readwrite("OpenedChest", &UOpenedChestMessage::OpenedChest)
        .def("GetString", &UOpenedChestMessage::GetString)
        .def("CloseFontColorTag", &UWillowLocalMessage::CloseFontColorTag)
        .def("OpenFontColorTag", &UWillowLocalMessage::OpenFontColorTag)
        .def("TrimWhitespace", &UWillowLocalMessage::TrimWhitespace)
          ;
}
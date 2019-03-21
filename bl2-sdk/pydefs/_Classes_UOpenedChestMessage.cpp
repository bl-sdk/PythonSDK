#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOpenedChestMessage()
{
    class_< UOpenedChestMessage, bases< ULocalMessage >  , boost::noncopyable>("UOpenedChestMessage", no_init)
        .def_readwrite("OpenedChest", &UOpenedChestMessage::OpenedChest)
        .def("StaticClass", &UOpenedChestMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetString", &UOpenedChestMessage::GetString)
        .def("CloseFontColorTag", &UWillowLocalMessage::CloseFontColorTag)
        .def("OpenFontColorTag", &UWillowLocalMessage::OpenFontColorTag)
        .def("TrimWhitespace", &UWillowLocalMessage::TrimWhitespace)
        .staticmethod("StaticClass")
  ;
}
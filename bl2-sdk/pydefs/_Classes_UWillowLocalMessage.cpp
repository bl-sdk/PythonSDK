#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowLocalMessage()
{
    class_< UWillowLocalMessage, bases< ULocalMessage >  , boost::noncopyable>("UWillowLocalMessage", no_init)
        .def("StaticClass", &UWillowLocalMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("CloseFontColorTag", &UWillowLocalMessage::CloseFontColorTag)
        .def("OpenFontColorTag", &UWillowLocalMessage::OpenFontColorTag)
        .def("TrimWhitespace", &UWillowLocalMessage::TrimWhitespace)
        .staticmethod("StaticClass")
  ;
}
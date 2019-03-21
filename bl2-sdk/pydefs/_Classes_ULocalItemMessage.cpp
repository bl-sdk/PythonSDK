#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULocalItemMessage()
{
    class_< ULocalItemMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("ULocalItemMessage", no_init)
        .def("StaticClass", &ULocalItemMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetItemString", &ULocalItemMessage::GetItemString)
        .def("GetItemColor", &ULocalItemMessage::GetItemColor)
        .def("ClientItemReceive", &ULocalItemMessage::ClientItemReceive)
        .staticmethod("StaticClass")
  ;
}
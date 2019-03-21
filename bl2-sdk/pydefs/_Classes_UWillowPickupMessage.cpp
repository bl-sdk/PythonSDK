#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPickupMessage()
{
    class_< UWillowPickupMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("UWillowPickupMessage", no_init)
        .def("StaticClass", &UWillowPickupMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetString", &UWillowPickupMessage::GetString)
        .def("ClientReceive", &UWillowPickupMessage::ClientReceive)
        .staticmethod("StaticClass")
  ;
}
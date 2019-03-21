#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULocalMapChangeMessage()
{
    class_< ULocalMapChangeMessage, bases< UWillowLocalMessage >  , boost::noncopyable>("ULocalMapChangeMessage", no_init)
        .def("StaticClass", &ULocalMapChangeMessage::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClientReceive", &ULocalMapChangeMessage::ClientReceive)
        .def("GetString", &ULocalMapChangeMessage::GetString)
        .staticmethod("StaticClass")
  ;
}
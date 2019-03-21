#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWindowsClient()
{
    class_< UWindowsClient, bases< UClient >  , boost::noncopyable>("UWindowsClient", no_init)
        .def_readonly("UnknownData00", &UWindowsClient::UnknownData00)
        .def_readwrite("AudioDeviceClass", &UWindowsClient::AudioDeviceClass)
        .def_readonly("UnknownData01", &UWindowsClient::UnknownData01)
        .def_readwrite("AllowJoystickInput", &UWindowsClient::AllowJoystickInput)
        .def_readonly("UnknownData02", &UWindowsClient::UnknownData02)
        .def("StaticClass", &UWindowsClient::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
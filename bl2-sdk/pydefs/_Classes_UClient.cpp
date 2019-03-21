#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UClient()
{
    class_< UClient, bases< UObject >  , boost::noncopyable>("UClient", no_init)
        .def_readonly("UnknownData00", &UClient::UnknownData00)
        .def_readwrite("MinDesiredFrameRate", &UClient::MinDesiredFrameRate)
        .def_readwrite("DisplayGamma", &UClient::DisplayGamma)
        .def_readwrite("InitialButtonRepeatDelay", &UClient::InitialButtonRepeatDelay)
        .def_readwrite("ButtonRepeatDelay", &UClient::ButtonRepeatDelay)
        .def("StaticClass", &UClient::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
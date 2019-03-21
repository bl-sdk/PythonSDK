#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInputDeviceButtonAddress()
{
    class_< FInputDeviceButtonAddress >("FInputDeviceButtonAddress", no_init)
        .def_readwrite("SourceDevice", &FInputDeviceButtonAddress::SourceDevice)
        .def_readwrite("SourceIndex", &FInputDeviceButtonAddress::SourceIndex)
        .def_readwrite("RemappedButton", &FInputDeviceButtonAddress::RemappedButton)
  ;
}
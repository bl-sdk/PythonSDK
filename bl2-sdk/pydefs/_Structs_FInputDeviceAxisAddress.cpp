#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInputDeviceAxisAddress()
{
    class_< FInputDeviceAxisAddress >("FInputDeviceAxisAddress", no_init)
        .def_readwrite("SourceDevice", &FInputDeviceAxisAddress::SourceDevice)
        .def_readwrite("SourceIndex", &FInputDeviceAxisAddress::SourceIndex)
  ;
}
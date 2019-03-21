#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInputDeviceButtonData()
{
    class_< FInputDeviceButtonData >("FInputDeviceButtonData", no_init)
        .def_readwrite("KeyName", &FInputDeviceButtonData::KeyName)
        .def_readwrite("PressActions", &FInputDeviceButtonData::PressActions)
        .def_readwrite("TapActions", &FInputDeviceButtonData::TapActions)
        .def_readwrite("HoldActions", &FInputDeviceButtonData::HoldActions)
        .def_readwrite("Caption", &FInputDeviceButtonData::Caption)
        .def_readwrite("KeyBindGroup", &FInputDeviceButtonData::KeyBindGroup)
        .def_readwrite("RemapToDefaultLayoutInputAction", &FInputDeviceButtonData::RemapToDefaultLayoutInputAction)
  ;
}
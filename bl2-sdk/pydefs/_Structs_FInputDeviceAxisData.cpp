#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInputDeviceAxisData()
{
    class_< FInputDeviceAxisData >("FInputDeviceAxisData", no_init)
        .def_readwrite("AxisName", &FInputDeviceAxisData::AxisName)
        .def_readwrite("AxisParameter", &FInputDeviceAxisData::AxisParameter)
        .def_readwrite("DeadZone", &FInputDeviceAxisData::DeadZone)
        .def_readwrite("Speed", &FInputDeviceAxisData::Speed)
        .def_readwrite("AbsoluteAxis", &FInputDeviceAxisData::AbsoluteAxis)
        .def_readwrite("InvertMultiplier", &FInputDeviceAxisData::InvertMultiplier)
        .def_readwrite("ActionName", &FInputDeviceAxisData::ActionName)
        .def_readwrite("Caption", &FInputDeviceAxisData::Caption)
        .def_readwrite("KeyBindGroup", &FInputDeviceAxisData::KeyBindGroup)
  ;
}
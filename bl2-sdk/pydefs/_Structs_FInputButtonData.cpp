#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInputButtonData()
{
    class_< FInputButtonData >("FInputButtonData", no_init)
        .def_readwrite("InputDeviceHandlers", &FInputButtonData::InputDeviceHandlers)
        .def_readwrite("ButtonName", &FInputButtonData::ButtonName)
        .def_readwrite("State", &FInputButtonData::State)
        .def_readwrite("LastPressedTime", &FInputButtonData::LastPressedTime)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputButtonData()
{
    py::class_< FInputButtonData >("FInputButtonData")
        .def_readwrite("InputDeviceHandlers", &FInputButtonData::InputDeviceHandlers)
        .def_readwrite("ButtonName", &FInputButtonData::ButtonName)
        .def_readwrite("State", &FInputButtonData::State)
        .def_readwrite("LastPressedTime", &FInputButtonData::LastPressedTime)
  ;
}
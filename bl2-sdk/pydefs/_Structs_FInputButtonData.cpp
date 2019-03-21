#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputButtonData(py::object m)
{
    py::class_< FInputButtonData >(m, "FInputButtonData")
        .def_readwrite("InputDeviceHandlers", &FInputButtonData::InputDeviceHandlers)
        .def_readwrite("ButtonName", &FInputButtonData::ButtonName)
        .def_readwrite("State", &FInputButtonData::State)
        .def_readwrite("LastPressedTime", &FInputButtonData::LastPressedTime)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputDeviceButtonData(py::object m)
{
    py::class_< FInputDeviceButtonData >(m, "FInputDeviceButtonData")
        .def_readwrite("KeyName", &FInputDeviceButtonData::KeyName)
        .def_readwrite("PressActions", &FInputDeviceButtonData::PressActions)
        .def_readwrite("TapActions", &FInputDeviceButtonData::TapActions)
        .def_readwrite("HoldActions", &FInputDeviceButtonData::HoldActions)
        .def_readwrite("Caption", &FInputDeviceButtonData::Caption)
        .def_readwrite("KeyBindGroup", &FInputDeviceButtonData::KeyBindGroup)
        .def_readwrite("RemapToDefaultLayoutInputAction", &FInputDeviceButtonData::RemapToDefaultLayoutInputAction)
  ;
}
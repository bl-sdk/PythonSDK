#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputDeviceAxisData(py::module &m)
{
    py::class_< FInputDeviceAxisData >(m, "FInputDeviceAxisData")
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
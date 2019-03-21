#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputAxisData()
{
    py::class_< FInputAxisData >("FInputAxisData")
        .def_readwrite("AxisName", &FInputAxisData::AxisName)
        .def_readwrite("InputDeviceHandler", &FInputAxisData::InputDeviceHandler)
        .def_readwrite("ParameterPtr", &FInputAxisData::ParameterPtr)
        .def_readwrite("AccelState", &FInputAxisData::AccelState)
  ;
}
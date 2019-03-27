#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputAxisData(py::module &m)
{
    py::class_< FInputAxisData >(m, "FInputAxisData")
        .def_readwrite("AxisName", &FInputAxisData::AxisName)
        .def_readwrite("InputDeviceHandler", &FInputAxisData::InputDeviceHandler)
        .def_readwrite("ParameterPtr", &FInputAxisData::ParameterPtr)
        .def_readwrite("AccelState", &FInputAxisData::AccelState)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputDeviceButtonAddress(py::object m)
{
    py::class_< FInputDeviceButtonAddress >(m, "FInputDeviceButtonAddress")
        .def_readwrite("SourceDevice", &FInputDeviceButtonAddress::SourceDevice)
        .def_readwrite("SourceIndex", &FInputDeviceButtonAddress::SourceIndex)
        .def_readwrite("RemappedButton", &FInputDeviceButtonAddress::RemappedButton)
  ;
}
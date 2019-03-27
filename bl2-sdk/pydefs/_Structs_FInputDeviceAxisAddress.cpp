#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputDeviceAxisAddress(py::module &m)
{
    py::class_< FInputDeviceAxisAddress >(m, "FInputDeviceAxisAddress")
        .def_readwrite("SourceDevice", &FInputDeviceAxisAddress::SourceDevice)
        .def_readwrite("SourceIndex", &FInputDeviceAxisAddress::SourceIndex)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWindowsClient(py::module &m)
{
    py::class_< UWindowsClient,  UClient   >(m, "UWindowsClient")
		.def_static("StaticClass", &UWindowsClient::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AudioDeviceClass", &UWindowsClient::AudioDeviceClass)
        .def_readwrite("AllowJoystickInput", &UWindowsClient::AllowJoystickInput)
          ;
}
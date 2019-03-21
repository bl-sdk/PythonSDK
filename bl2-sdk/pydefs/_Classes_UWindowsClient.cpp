#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWindowsClient(py::object m)
{
    py::class_< UWindowsClient,  UClient   >(m, "UWindowsClient")
        .def_readonly("UnknownData00", &UWindowsClient::UnknownData00)
        .def_readwrite("AudioDeviceClass", &UWindowsClient::AudioDeviceClass)
        .def_readonly("UnknownData01", &UWindowsClient::UnknownData01)
        .def_readwrite("AllowJoystickInput", &UWindowsClient::AllowJoystickInput)
        .def_readonly("UnknownData02", &UWindowsClient::UnknownData02)
        .def("StaticClass", &UWindowsClient::StaticClass, py::return_value_policy::reference)
          ;
}
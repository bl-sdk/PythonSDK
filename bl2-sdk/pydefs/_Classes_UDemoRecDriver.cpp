#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDemoRecDriver()
{
    py::class_< UDemoRecDriver,  UNetDriver   >("UDemoRecDriver")
        .def_readonly("UnknownData00", &UDemoRecDriver::UnknownData00)
        .def_readwrite("DemoSpectatorClass", &UDemoRecDriver::DemoSpectatorClass)
        .def_readonly("UnknownData01", &UDemoRecDriver::UnknownData01)
        .def_readwrite("MaxRewindPoints", &UDemoRecDriver::MaxRewindPoints)
        .def_readonly("UnknownData02", &UDemoRecDriver::UnknownData02)
        .def_readwrite("RewindPointInterval", &UDemoRecDriver::RewindPointInterval)
        .def_readwrite("NumRecentRewindPoints", &UDemoRecDriver::NumRecentRewindPoints)
        .def_readonly("UnknownData03", &UDemoRecDriver::UnknownData03)
        .def("StaticClass", &UDemoRecDriver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
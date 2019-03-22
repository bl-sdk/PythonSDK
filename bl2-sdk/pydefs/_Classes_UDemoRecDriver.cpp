#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDemoRecDriver(py::module &m)
{
    py::class_< UDemoRecDriver,  UNetDriver   >(m, "UDemoRecDriver")
        .def_readwrite("DemoSpectatorClass", &UDemoRecDriver::DemoSpectatorClass)
        .def_readwrite("MaxRewindPoints", &UDemoRecDriver::MaxRewindPoints)
        .def_readwrite("RewindPointInterval", &UDemoRecDriver::RewindPointInterval)
        .def_readwrite("NumRecentRewindPoints", &UDemoRecDriver::NumRecentRewindPoints)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInputDeviceCollectionDefinition()
{
    py::class_< UInputDeviceCollectionDefinition,  UGBXDefinition   >("UInputDeviceCollectionDefinition")
        .def_readwrite("XboxInputDevices", &UInputDeviceCollectionDefinition::XboxInputDevices)
        .def_readwrite("PS3InputDevices", &UInputDeviceCollectionDefinition::PS3InputDevices)
        .def_readwrite("PCInputDevices", &UInputDeviceCollectionDefinition::PCInputDevices)
        .def_readwrite("PCKeyBindGroups", &UInputDeviceCollectionDefinition::PCKeyBindGroups)
        .def("StaticClass", &UInputDeviceCollectionDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
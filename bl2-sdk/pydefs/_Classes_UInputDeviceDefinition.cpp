#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInputDeviceDefinition(py::module &m)
{
    py::class_< UInputDeviceDefinition,  UGBXDefinition   >(m, "UInputDeviceDefinition")
        .def_readwrite("Axes", &UInputDeviceDefinition::Axes)
        .def_readwrite("LookAxisDefinitions", &UInputDeviceDefinition::LookAxisDefinitions)
        .def_readwrite("Buttons", &UInputDeviceDefinition::Buttons)
        .def("StaticClass", &UInputDeviceDefinition::StaticClass, py::return_value_policy::reference)
          ;
}
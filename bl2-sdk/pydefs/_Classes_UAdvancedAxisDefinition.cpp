#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAdvancedAxisDefinition(py::object m)
{
    py::class_< UAdvancedAxisDefinition,  UGBXDefinition   >(m, "UAdvancedAxisDefinition")
        .def_readwrite("Speed", &UAdvancedAxisDefinition::Speed)
        .def_readwrite("ZoomSpeed", &UAdvancedAxisDefinition::ZoomSpeed)
        .def_readwrite("DeadZone", &UAdvancedAxisDefinition::DeadZone)
        .def_readwrite("AccelThreshold", &UAdvancedAxisDefinition::AccelThreshold)
        .def_readwrite("AccelRate", &UAdvancedAxisDefinition::AccelRate)
        .def_readwrite("AccelSpeed", &UAdvancedAxisDefinition::AccelSpeed)
        .def_readwrite("AccelWarmup", &UAdvancedAxisDefinition::AccelWarmup)
        .def("StaticClass", &UAdvancedAxisDefinition::StaticClass, py::return_value_policy::reference)
          ;
}
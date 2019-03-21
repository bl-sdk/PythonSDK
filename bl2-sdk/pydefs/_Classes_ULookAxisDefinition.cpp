#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULookAxisDefinition(py::object m)
{
    py::class_< ULookAxisDefinition,  UGBXDefinition   >(m, "ULookAxisDefinition")
        .def_readwrite("Speed", &ULookAxisDefinition::Speed)
        .def_readwrite("ZoomSpeed", &ULookAxisDefinition::ZoomSpeed)
        .def_readwrite("AccelThreshold", &ULookAxisDefinition::AccelThreshold)
        .def_readwrite("AccelRate", &ULookAxisDefinition::AccelRate)
        .def_readwrite("AccelSpeed", &ULookAxisDefinition::AccelSpeed)
        .def_readwrite("AccelWarmup", &ULookAxisDefinition::AccelWarmup)
        .def("StaticClass", &ULookAxisDefinition::StaticClass, py::return_value_policy::reference)
          ;
}
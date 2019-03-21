#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowAnimDefinition()
{
    py::class_< UWillowAnimDefinition,  UGearboxAnimDefinition   >("UWillowAnimDefinition")
        .def_readwrite("InstanceDataName", &UWillowAnimDefinition::InstanceDataName)
        .def("StaticClass", &UWillowAnimDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetSMNode", &UWillowAnimDefinition::GetSMNode, py::return_value_policy::reference)
        .def("eventClientFinished", &UWillowAnimDefinition::eventClientFinished)
        .def("eventClientStarted", &UWillowAnimDefinition::eventClientStarted)
        .def("eventServerFinished", &UWillowAnimDefinition::eventServerFinished)
        .def("eventServerStarted", &UWillowAnimDefinition::eventServerStarted)
        .def("eventAuthorityCanPlay", &UWillowAnimDefinition::eventAuthorityCanPlay)
        .staticmethod("StaticClass")
  ;
}
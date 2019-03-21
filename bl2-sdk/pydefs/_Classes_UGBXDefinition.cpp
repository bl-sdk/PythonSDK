#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGBXDefinition()
{
    py::class_< UGBXDefinition,  UObject   >("UGBXDefinition")
        .def("StaticClass", &UGBXDefinition::StaticClass, py::return_value_policy::reference)
        .def("InitializeDefinitionActor", &UGBXDefinition::InitializeDefinitionActor)
        .def("GetDefinitionActorClass", &UGBXDefinition::GetDefinitionActorClass, py::return_value_policy::reference)
        .def("StaticGetFullNameForDefinition", &UGBXDefinition::StaticGetFullNameForDefinition)
        .def("GetFullDefinitionName", &UGBXDefinition::GetFullDefinitionName)
        .def("GetDefinition", &UGBXDefinition::GetDefinition, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
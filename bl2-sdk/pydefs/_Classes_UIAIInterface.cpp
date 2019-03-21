#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIAIInterface()
{
    py::class_< UIAIInterface,  UInterface   >("UIAIInterface")
        .def("StaticClass", &UIAIInterface::StaticClass, py::return_value_policy::reference)
        .def("InitSequence", &UIAIInterface::InitSequence)
        .def("GetAllegiance", &UIAIInterface::GetAllegiance, py::return_value_policy::reference)
        .def("GetAIDefinition", &UIAIInterface::GetAIDefinition, py::return_value_policy::reference)
        .def("GetAIComponent", &UIAIInterface::GetAIComponent, py::return_value_policy::reference)
        .def("GetAIParent", &UIAIInterface::GetAIParent, py::return_value_policy::reference)
        .def("GetAILocation", &UIAIInterface::GetAILocation)
        .def("GetAIActor", &UIAIInterface::GetAIActor, py::return_value_policy::reference)
        .def("CanTickAI", &UIAIInterface::CanTickAI)
        .staticmethod("StaticClass")
  ;
}
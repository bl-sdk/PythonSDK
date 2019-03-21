#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIConsoleCommandBehavior()
{
    py::class_< UIConsoleCommandBehavior,  UInterface   >("UIConsoleCommandBehavior")
        .def("StaticClass", &UIConsoleCommandBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_ClientConsoleCommand", &UIConsoleCommandBehavior::Behavior_ClientConsoleCommand)
        .def("Behavior_ConsoleCommand", &UIConsoleCommandBehavior::Behavior_ConsoleCommand)
        .staticmethod("StaticClass")
  ;
}
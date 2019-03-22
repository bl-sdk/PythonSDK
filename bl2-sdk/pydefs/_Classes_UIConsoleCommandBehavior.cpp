#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIConsoleCommandBehavior(py::module &m)
{
    py::class_< UIConsoleCommandBehavior,  UInterface   >(m, "UIConsoleCommandBehavior")
        .def("Behavior_ClientConsoleCommand", &UIConsoleCommandBehavior::Behavior_ClientConsoleCommand)
        .def("Behavior_ConsoleCommand", &UIConsoleCommandBehavior::Behavior_ConsoleCommand)
          ;
}
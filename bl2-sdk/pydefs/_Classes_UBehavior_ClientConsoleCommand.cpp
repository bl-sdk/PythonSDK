#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ClientConsoleCommand(py::object m)
{
    py::class_< UBehavior_ClientConsoleCommand,  UBehaviorBase   >(m, "UBehavior_ClientConsoleCommand")
        .def_readwrite("Command", &UBehavior_ClientConsoleCommand::Command)
        .def("StaticClass", &UBehavior_ClientConsoleCommand::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ClientConsoleCommand::ApplyBehaviorToContext)
          ;
}
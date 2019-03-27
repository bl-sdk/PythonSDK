#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ClientConsoleCommand(py::module &m)
{
    py::class_< UBehavior_ClientConsoleCommand,  UBehaviorBase   >(m, "UBehavior_ClientConsoleCommand")
		.def_static("StaticClass", &UBehavior_ClientConsoleCommand::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Command", &UBehavior_ClientConsoleCommand::Command)
        .def("ApplyBehaviorToContext", &UBehavior_ClientConsoleCommand::ApplyBehaviorToContext)
          ;
}
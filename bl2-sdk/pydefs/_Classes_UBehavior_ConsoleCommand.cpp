#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ConsoleCommand(py::module &m)
{
    py::class_< UBehavior_ConsoleCommand,  UBehaviorBase   >(m, "UBehavior_ConsoleCommand")
		.def_static("StaticClass", &UBehavior_ConsoleCommand::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Command", &UBehavior_ConsoleCommand::Command)
        .def("ApplyBehaviorToContext", &UBehavior_ConsoleCommand::ApplyBehaviorToContext)
          ;
}
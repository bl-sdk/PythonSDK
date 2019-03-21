#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDebugConsoleCommand()
{
    py::class_< FDebugConsoleCommand >("FDebugConsoleCommand")
        .def_readwrite("MenuName", &FDebugConsoleCommand::MenuName)
        .def_readwrite("CommandName", &FDebugConsoleCommand::CommandName)
        .def_readwrite("Description", &FDebugConsoleCommand::Description)
        .def_readwrite("Command", &FDebugConsoleCommand::Command)
  ;
}
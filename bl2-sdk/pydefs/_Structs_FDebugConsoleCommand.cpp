#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDebugConsoleCommand()
{
    class_< FDebugConsoleCommand >("FDebugConsoleCommand", no_init)
        .def_readwrite("MenuName", &FDebugConsoleCommand::MenuName)
        .def_readwrite("CommandName", &FDebugConsoleCommand::CommandName)
        .def_readwrite("Description", &FDebugConsoleCommand::Description)
        .def_readwrite("Command", &FDebugConsoleCommand::Command)
  ;
}
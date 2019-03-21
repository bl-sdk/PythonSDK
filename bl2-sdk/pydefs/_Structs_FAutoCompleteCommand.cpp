#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAutoCompleteCommand()
{
    class_< FAutoCompleteCommand >("FAutoCompleteCommand", no_init)
        .def_readwrite("Command", &FAutoCompleteCommand::Command)
        .def_readwrite("Desc", &FAutoCompleteCommand::Desc)
  ;
}
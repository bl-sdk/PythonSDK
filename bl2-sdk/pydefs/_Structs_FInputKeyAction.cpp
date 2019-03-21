#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInputKeyAction()
{
    class_< FInputKeyAction >("FInputKeyAction", no_init)
        .def_readwrite("InputKeyName", &FInputKeyAction::InputKeyName)
        .def_readwrite("InputKeyState", &FInputKeyAction::InputKeyState)
        .def_readwrite("TriggeredOps", &FInputKeyAction::TriggeredOps)
        .def_readwrite("ActionsToExecute", &FInputKeyAction::ActionsToExecute)
  ;
}
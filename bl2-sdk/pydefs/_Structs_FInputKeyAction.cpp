#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputKeyAction(py::object m)
{
    py::class_< FInputKeyAction >(m, "FInputKeyAction")
        .def_readwrite("InputKeyName", &FInputKeyAction::InputKeyName)
        .def_readwrite("InputKeyState", &FInputKeyAction::InputKeyState)
        .def_readwrite("TriggeredOps", &FInputKeyAction::TriggeredOps)
        .def_readwrite("ActionsToExecute", &FInputKeyAction::ActionsToExecute)
  ;
}
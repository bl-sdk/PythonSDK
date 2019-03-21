#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSubscribedInputEventParameters()
{
    py::class_< FSubscribedInputEventParameters >("FSubscribedInputEventParameters")
        .def_readwrite("InputAliasName", &FSubscribedInputEventParameters::InputAliasName)
        .def_readwrite("PlayerIndex", &FInputEventParameters::PlayerIndex)
        .def_readwrite("ControllerId", &FInputEventParameters::ControllerId)
        .def_readwrite("InputKeyName", &FInputEventParameters::InputKeyName)
        .def_readwrite("EventType", &FInputEventParameters::EventType)
        .def_readwrite("InputDelta", &FInputEventParameters::InputDelta)
        .def_readwrite("DeltaTime", &FInputEventParameters::DeltaTime)
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSubscribedInputEventParameters()
{
    class_< FSubscribedInputEventParameters >("FSubscribedInputEventParameters", no_init)
        .def_readwrite("InputAliasName", &FSubscribedInputEventParameters::InputAliasName)
        .def_readwrite("PlayerIndex", &FInputEventParameters::PlayerIndex)
        .def_readwrite("ControllerId", &FInputEventParameters::ControllerId)
        .def_readwrite("InputKeyName", &FInputEventParameters::InputKeyName)
        .def_readwrite("EventType", &FInputEventParameters::EventType)
        .def_readwrite("InputDelta", &FInputEventParameters::InputDelta)
        .def_readwrite("DeltaTime", &FInputEventParameters::DeltaTime)
  ;
}
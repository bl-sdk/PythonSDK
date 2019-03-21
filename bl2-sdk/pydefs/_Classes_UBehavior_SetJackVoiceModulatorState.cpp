#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetJackVoiceModulatorState()
{
    py::class_< UBehavior_SetJackVoiceModulatorState,  UBehaviorBase   >("UBehavior_SetJackVoiceModulatorState")
        .def("StaticClass", &UBehavior_SetJackVoiceModulatorState::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetJackVoiceModulatorState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
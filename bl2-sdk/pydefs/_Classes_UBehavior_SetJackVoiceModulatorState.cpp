#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetJackVoiceModulatorState(py::module &m)
{
    py::class_< UBehavior_SetJackVoiceModulatorState,  UBehaviorBase   >(m, "UBehavior_SetJackVoiceModulatorState")
		.def_static("StaticClass", &UBehavior_SetJackVoiceModulatorState::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetJackVoiceModulatorState::ApplyBehaviorToContext)
          ;
}
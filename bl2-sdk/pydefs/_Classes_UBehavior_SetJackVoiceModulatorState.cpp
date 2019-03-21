#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SetJackVoiceModulatorState()
{
    class_< UBehavior_SetJackVoiceModulatorState, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SetJackVoiceModulatorState", no_init)
        .def("StaticClass", &UBehavior_SetJackVoiceModulatorState::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SetJackVoiceModulatorState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
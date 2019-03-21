#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeLocalBehaviorSequenceState()
{
    class_< UBehavior_ChangeLocalBehaviorSequenceState, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeLocalBehaviorSequenceState", no_init)
        .def_readwrite("Action", &UBehavior_ChangeLocalBehaviorSequenceState::Action)
        .def_readwrite("SequenceName", &UBehavior_ChangeLocalBehaviorSequenceState::SequenceName)
        .def("StaticClass", &UBehavior_ChangeLocalBehaviorSequenceState::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeLocalBehaviorSequenceState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
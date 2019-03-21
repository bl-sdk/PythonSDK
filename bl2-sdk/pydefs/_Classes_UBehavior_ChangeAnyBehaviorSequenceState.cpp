#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeAnyBehaviorSequenceState()
{
    class_< UBehavior_ChangeAnyBehaviorSequenceState, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeAnyBehaviorSequenceState", no_init)
        .def_readwrite("Action", &UBehavior_ChangeAnyBehaviorSequenceState::Action)
        .def_readwrite("SequenceName", &UBehavior_ChangeAnyBehaviorSequenceState::SequenceName)
        .def("StaticClass", &UBehavior_ChangeAnyBehaviorSequenceState::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeAnyBehaviorSequenceState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
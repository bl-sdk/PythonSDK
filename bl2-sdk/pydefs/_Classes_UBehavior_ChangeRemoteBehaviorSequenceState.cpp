#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeRemoteBehaviorSequenceState()
{
    class_< UBehavior_ChangeRemoteBehaviorSequenceState, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ChangeRemoteBehaviorSequenceState", no_init)
        .def_readwrite("Action", &UBehavior_ChangeRemoteBehaviorSequenceState::Action)
        .def_readwrite("SequenceName", &UBehavior_ChangeRemoteBehaviorSequenceState::SequenceName)
        .def_readwrite("SequenceProvider", &UBehavior_ChangeRemoteBehaviorSequenceState::SequenceProvider)
        .def_readwrite("ProviderDefinitionPathName", &UBehavior_ChangeRemoteBehaviorSequenceState::ProviderDefinitionPathName)
        .def("StaticClass", &UBehavior_ChangeRemoteBehaviorSequenceState::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ChangeRemoteBehaviorSequenceState::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}
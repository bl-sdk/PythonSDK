#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeRemoteBehaviorSequenceState(py::module &m)
{
    py::class_< UBehavior_ChangeRemoteBehaviorSequenceState,  UBehaviorBase   >(m, "UBehavior_ChangeRemoteBehaviorSequenceState")
        .def_readwrite("Action", &UBehavior_ChangeRemoteBehaviorSequenceState::Action)
        .def_readwrite("SequenceName", &UBehavior_ChangeRemoteBehaviorSequenceState::SequenceName)
        .def_readwrite("SequenceProvider", &UBehavior_ChangeRemoteBehaviorSequenceState::SequenceProvider)
        .def_readwrite("ProviderDefinitionPathName", &UBehavior_ChangeRemoteBehaviorSequenceState::ProviderDefinitionPathName)
        .def("StaticClass", &UBehavior_ChangeRemoteBehaviorSequenceState::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeRemoteBehaviorSequenceState::ApplyBehaviorToContext)
          ;
}
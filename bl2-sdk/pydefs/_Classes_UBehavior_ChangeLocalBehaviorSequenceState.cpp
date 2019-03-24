#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeLocalBehaviorSequenceState(py::module &m)
{
    py::class_< UBehavior_ChangeLocalBehaviorSequenceState,  UBehaviorBase   >(m, "UBehavior_ChangeLocalBehaviorSequenceState")
		.def_static("StaticClass", &UBehavior_ChangeLocalBehaviorSequenceState::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Action", &UBehavior_ChangeLocalBehaviorSequenceState::Action)
        .def_readwrite("SequenceName", &UBehavior_ChangeLocalBehaviorSequenceState::SequenceName)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeLocalBehaviorSequenceState::ApplyBehaviorToContext)
          ;
}
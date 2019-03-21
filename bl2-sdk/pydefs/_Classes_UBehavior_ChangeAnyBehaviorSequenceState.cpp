#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeAnyBehaviorSequenceState(py::object m)
{
    py::class_< UBehavior_ChangeAnyBehaviorSequenceState,  UBehaviorBase   >(m, "UBehavior_ChangeAnyBehaviorSequenceState")
        .def_readwrite("Action", &UBehavior_ChangeAnyBehaviorSequenceState::Action)
        .def_readwrite("SequenceName", &UBehavior_ChangeAnyBehaviorSequenceState::SequenceName)
        .def("StaticClass", &UBehavior_ChangeAnyBehaviorSequenceState::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeAnyBehaviorSequenceState::ApplyBehaviorToContext)
          ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ChangeAnyBehaviorSequenceState(py::module &m)
{
    py::class_< UBehavior_ChangeAnyBehaviorSequenceState,  UBehaviorBase   >(m, "UBehavior_ChangeAnyBehaviorSequenceState")
        .def_readwrite("Action", &UBehavior_ChangeAnyBehaviorSequenceState::Action)
        .def_readwrite("SequenceName", &UBehavior_ChangeAnyBehaviorSequenceState::SequenceName)
        .def("ApplyBehaviorToContext", &UBehavior_ChangeAnyBehaviorSequenceState::ApplyBehaviorToContext)
          ;
}
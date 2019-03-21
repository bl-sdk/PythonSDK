#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorSequenceCustomEnableCondition()
{
    py::class_< UBehaviorSequenceCustomEnableCondition,  UObject   >("UBehaviorSequenceCustomEnableCondition")
        .def_readwrite("LinkedBehaviorSequences", &UBehaviorSequenceCustomEnableCondition::LinkedBehaviorSequences)
        .def_readwrite("BehaviorKernelInstanceTagForTransientState", &UBehaviorSequenceCustomEnableCondition::BehaviorKernelInstanceTagForTransientState)
        .def("StaticClass", &UBehaviorSequenceCustomEnableCondition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
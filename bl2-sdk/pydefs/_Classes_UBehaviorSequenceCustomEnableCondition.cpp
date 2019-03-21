#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehaviorSequenceCustomEnableCondition()
{
    class_< UBehaviorSequenceCustomEnableCondition, bases< UObject >  , boost::noncopyable>("UBehaviorSequenceCustomEnableCondition", no_init)
        .def_readwrite("LinkedBehaviorSequences", &UBehaviorSequenceCustomEnableCondition::LinkedBehaviorSequences)
        .def_readwrite("BehaviorKernelInstanceTagForTransientState", &UBehaviorSequenceCustomEnableCondition::BehaviorKernelInstanceTagForTransientState)
        .def("StaticClass", &UBehaviorSequenceCustomEnableCondition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
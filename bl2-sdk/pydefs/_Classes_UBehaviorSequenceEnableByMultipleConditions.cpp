#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehaviorSequenceEnableByMultipleConditions()
{
    class_< UBehaviorSequenceEnableByMultipleConditions, bases< UBehaviorSequenceCustomEnableCondition >  , boost::noncopyable>("UBehaviorSequenceEnableByMultipleConditions", no_init)
        .def_readwrite("EnableConditions", &UBehaviorSequenceEnableByMultipleConditions::EnableConditions)
        .def_readwrite("Operator", &UBehaviorSequenceEnableByMultipleConditions::Operator)
        .def("StaticClass", &UBehaviorSequenceEnableByMultipleConditions::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}
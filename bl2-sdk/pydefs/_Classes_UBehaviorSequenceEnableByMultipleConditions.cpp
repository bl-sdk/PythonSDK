#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorSequenceEnableByMultipleConditions()
{
    py::class_< UBehaviorSequenceEnableByMultipleConditions,  UBehaviorSequenceCustomEnableCondition   >("UBehaviorSequenceEnableByMultipleConditions")
        .def_readwrite("EnableConditions", &UBehaviorSequenceEnableByMultipleConditions::EnableConditions)
        .def_readwrite("Operator", &UBehaviorSequenceEnableByMultipleConditions::Operator)
        .def("StaticClass", &UBehaviorSequenceEnableByMultipleConditions::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
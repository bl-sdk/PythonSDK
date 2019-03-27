#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorSequenceEnableByMultipleConditions(py::module &m)
{
    py::class_< UBehaviorSequenceEnableByMultipleConditions,  UBehaviorSequenceCustomEnableCondition   >(m, "UBehaviorSequenceEnableByMultipleConditions")
		.def_static("StaticClass", &UBehaviorSequenceEnableByMultipleConditions::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EnableConditions", &UBehaviorSequenceEnableByMultipleConditions::EnableConditions)
        .def_readwrite("Operator", &UBehaviorSequenceEnableByMultipleConditions::Operator)
          ;
}
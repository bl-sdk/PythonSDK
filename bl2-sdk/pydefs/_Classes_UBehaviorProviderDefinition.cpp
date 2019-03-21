#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorProviderDefinition()
{
    py::class_< UBehaviorProviderDefinition,  UGBXDefinition   >("UBehaviorProviderDefinition")
        .def_readwrite("CurrentVersion", &UBehaviorProviderDefinition::CurrentVersion)
        .def_readwrite("BehaviorSequences", &UBehaviorProviderDefinition::BehaviorSequences)
        .def("StaticClass", &UBehaviorProviderDefinition::StaticClass, py::return_value_policy::reference)
        .def("SetObjectBehaviorVariable", &UBehaviorProviderDefinition::SetObjectBehaviorVariable)
        .def("SetVectorBehaviorVariable", &UBehaviorProviderDefinition::SetVectorBehaviorVariable)
        .def("SetFloatBehaviorVariable", &UBehaviorProviderDefinition::SetFloatBehaviorVariable)
        .def("SetIntBehaviorVariable", &UBehaviorProviderDefinition::SetIntBehaviorVariable)
        .def("SetBoolBehaviorVariable", &UBehaviorProviderDefinition::SetBoolBehaviorVariable)
        .staticmethod("StaticClass")
  ;
}
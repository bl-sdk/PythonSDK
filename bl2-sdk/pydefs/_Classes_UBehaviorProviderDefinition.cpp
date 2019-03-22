#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehaviorProviderDefinition(py::module &m)
{
    py::class_< UBehaviorProviderDefinition,  UGBXDefinition   >(m, "UBehaviorProviderDefinition")
        .def_readwrite("CurrentVersion", &UBehaviorProviderDefinition::CurrentVersion)
        .def_readwrite("BehaviorSequences", &UBehaviorProviderDefinition::BehaviorSequences)
        .def("SetObjectBehaviorVariable", &UBehaviorProviderDefinition::SetObjectBehaviorVariable)
        .def("SetVectorBehaviorVariable", &UBehaviorProviderDefinition::SetVectorBehaviorVariable)
        .def("SetFloatBehaviorVariable", &UBehaviorProviderDefinition::SetFloatBehaviorVariable)
        .def("SetIntBehaviorVariable", &UBehaviorProviderDefinition::SetIntBehaviorVariable)
        .def("SetBoolBehaviorVariable", &UBehaviorProviderDefinition::SetBoolBehaviorVariable)
          ;
}
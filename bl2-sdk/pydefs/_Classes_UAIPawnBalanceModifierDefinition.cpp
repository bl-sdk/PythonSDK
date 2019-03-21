#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAIPawnBalanceModifierDefinition()
{
    py::class_< UAIPawnBalanceModifierDefinition,  UGBXDefinition   >("UAIPawnBalanceModifierDefinition")
        .def_readwrite("AIPawnBalanceDefinitionPath", &UAIPawnBalanceModifierDefinition::AIPawnBalanceDefinitionPath)
        .def_readwrite("AttributeStartingValues", &UAIPawnBalanceModifierDefinition::AttributeStartingValues)
        .def("StaticClass", &UAIPawnBalanceModifierDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
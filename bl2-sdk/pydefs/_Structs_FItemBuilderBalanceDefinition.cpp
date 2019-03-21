#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemBuilderBalanceDefinition()
{
    py::class_< FItemBuilderBalanceDefinition >("FItemBuilderBalanceDefinition")
        .def_readwrite("InventoryDefinitionClass", &FItemBuilderBalanceDefinition::InventoryDefinitionClass)
        .def_readwrite("BalanceDefinitions", &FItemBuilderBalanceDefinition::BalanceDefinitions)
  ;
}
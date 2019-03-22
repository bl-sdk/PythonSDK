#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemBuilderBalanceDefinition(py::module &m)
{
    py::class_< FItemBuilderBalanceDefinition >(m, "FItemBuilderBalanceDefinition")
        .def_readwrite("InventoryDefinitionClass", &FItemBuilderBalanceDefinition::InventoryDefinitionClass)
        .def_readwrite("BalanceDefinitions", &FItemBuilderBalanceDefinition::BalanceDefinitions)
  ;
}
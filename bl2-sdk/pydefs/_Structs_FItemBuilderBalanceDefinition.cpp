#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FItemBuilderBalanceDefinition()
{
    class_< FItemBuilderBalanceDefinition >("FItemBuilderBalanceDefinition", no_init)
        .def_readwrite("InventoryDefinitionClass", &FItemBuilderBalanceDefinition::InventoryDefinitionClass)
        .def_readwrite("BalanceDefinitions", &FItemBuilderBalanceDefinition::BalanceDefinitions)
  ;
}
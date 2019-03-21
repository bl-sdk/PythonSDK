#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FItemBuilderData()
{
    class_< FItemBuilderData >("FItemBuilderData", no_init)
        .def_readwrite("TabName", &FItemBuilderData::TabName)
        .def_readwrite("ItemName", &FItemBuilderData::ItemName)
        .def_readwrite("BuildItemMessage", &FItemBuilderData::BuildItemMessage)
        .def_readwrite("InventoryDefinitionClassName", &FItemBuilderData::InventoryDefinitionClassName)
        .def_readwrite("InventoryBalanceDefinitionNames", &FItemBuilderData::InventoryBalanceDefinitionNames)
  ;
}
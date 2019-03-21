#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FItemBuilderData(py::object m)
{
    py::class_< FItemBuilderData >(m, "FItemBuilderData")
        .def_readwrite("TabName", &FItemBuilderData::TabName)
        .def_readwrite("ItemName", &FItemBuilderData::ItemName)
        .def_readwrite("BuildItemMessage", &FItemBuilderData::BuildItemMessage)
        .def_readwrite("InventoryDefinitionClassName", &FItemBuilderData::InventoryDefinitionClassName)
        .def_readwrite("InventoryBalanceDefinitionNames", &FItemBuilderData::InventoryBalanceDefinitionNames)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemBalanceDefinition()
{
    py::class_< UItemBalanceDefinition,  UInventoryBalanceDefinition   >("UItemBalanceDefinition")
        .def_readwrite("ItemPartListCollection", &UItemBalanceDefinition::ItemPartListCollection)
        .def_readwrite("RuntimePartListCollection", &UItemBalanceDefinition::RuntimePartListCollection)
        .def("StaticClass", &UItemBalanceDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemBalanceDefinition(py::object m)
{
    py::class_< UItemBalanceDefinition,  UInventoryBalanceDefinition   >(m, "UItemBalanceDefinition")
        .def_readwrite("ItemPartListCollection", &UItemBalanceDefinition::ItemPartListCollection)
        .def_readwrite("RuntimePartListCollection", &UItemBalanceDefinition::RuntimePartListCollection)
        .def("StaticClass", &UItemBalanceDefinition::StaticClass, py::return_value_policy::reference)
          ;
}
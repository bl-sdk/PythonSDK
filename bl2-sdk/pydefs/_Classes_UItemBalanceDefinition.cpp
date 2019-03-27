#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemBalanceDefinition(py::module &m)
{
    py::class_< UItemBalanceDefinition,  UInventoryBalanceDefinition   >(m, "UItemBalanceDefinition")
		.def_static("StaticClass", &UItemBalanceDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ItemPartListCollection", &UItemBalanceDefinition::ItemPartListCollection)
        .def_readwrite("RuntimePartListCollection", &UItemBalanceDefinition::RuntimePartListCollection)
          ;
}
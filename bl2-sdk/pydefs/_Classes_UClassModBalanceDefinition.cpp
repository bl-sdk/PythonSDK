#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClassModBalanceDefinition(py::module &m)
{
    py::class_< UClassModBalanceDefinition,  UItemBalanceDefinition   >(m, "UClassModBalanceDefinition")
        .def_readwrite("ClassModDefinitions", &UClassModBalanceDefinition::ClassModDefinitions)
        .def("GetClassModDefSpawnedByBalanceDef", &UClassModBalanceDefinition::GetClassModDefSpawnedByBalanceDef)
        .def("GetInventoryDefinitionForManufacturerGrade", &UClassModBalanceDefinition::GetInventoryDefinitionForManufacturerGrade, py::return_value_policy::reference)
          ;
}
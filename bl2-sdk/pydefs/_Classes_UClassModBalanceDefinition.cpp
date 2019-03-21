#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UClassModBalanceDefinition(py::object m)
{
    py::class_< UClassModBalanceDefinition,  UItemBalanceDefinition   >(m, "UClassModBalanceDefinition")
        .def_readwrite("ClassModDefinitions", &UClassModBalanceDefinition::ClassModDefinitions)
        .def("StaticClass", &UClassModBalanceDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetClassModDefSpawnedByBalanceDef", &UClassModBalanceDefinition::GetClassModDefSpawnedByBalanceDef)
        .def("GetInventoryDefinitionForManufacturerGrade", &UClassModBalanceDefinition::GetInventoryDefinitionForManufacturerGrade, py::return_value_policy::reference)
          ;
}
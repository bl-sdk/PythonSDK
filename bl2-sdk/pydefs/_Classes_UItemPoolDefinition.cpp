#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemPoolDefinition(py::object m)
{
    py::class_< UItemPoolDefinition,  UGBXDefinition   >(m, "UItemPoolDefinition")
        .def_readwrite("CheatSpawnLevel", &UItemPoolDefinition::CheatSpawnLevel)
        .def_readwrite("BalancedItems", &UItemPoolDefinition::BalancedItems)
        .def_readwrite("Quantity", &UItemPoolDefinition::Quantity)
        .def_readwrite("MinGameStageRequirement", &UItemPoolDefinition::MinGameStageRequirement)
        .def_readwrite("MaxGameStageRequirement", &UItemPoolDefinition::MaxGameStageRequirement)
        .def("StaticClass", &UItemPoolDefinition::StaticClass, py::return_value_policy::reference)
          ;
}
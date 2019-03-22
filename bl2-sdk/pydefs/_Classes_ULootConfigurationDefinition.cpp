#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULootConfigurationDefinition(py::module &m)
{
    py::class_< ULootConfigurationDefinition,  UGBXDefinition   >(m, "ULootConfigurationDefinition")
        .def_readwrite("Loot", &ULootConfigurationDefinition::Loot)
        .def_readwrite("Probability", &ULootConfigurationDefinition::Probability)
        .def("StaticClass", &ULootConfigurationDefinition::StaticClass, py::return_value_policy::reference)
          ;
}
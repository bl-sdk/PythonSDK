#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBalancedInventoryData()
{
    py::class_< FBalancedInventoryData >("FBalancedInventoryData")
        .def_readwrite("ItmPoolDefinition", &FBalancedInventoryData::ItmPoolDefinition)
        .def_readwrite("InvBalanceDefinition", &FBalancedInventoryData::InvBalanceDefinition)
        .def_readwrite("Probability", &FBalancedInventoryData::Probability)
  ;
}
#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBalancedInventoryData()
{
    class_< FBalancedInventoryData >("FBalancedInventoryData", no_init)
        .def_readwrite("ItmPoolDefinition", &FBalancedInventoryData::ItmPoolDefinition)
        .def_readwrite("InvBalanceDefinition", &FBalancedInventoryData::InvBalanceDefinition)
        .def_readwrite("Probability", &FBalancedInventoryData::Probability)
  ;
}
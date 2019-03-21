#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGearBuilderCustomizationData()
{
    class_< FGearBuilderCustomizationData >("FGearBuilderCustomizationData", no_init)
        .def_readwrite("SortValue", &FGearBuilderCustomizationData::SortValue)
        .def_readwrite("BalanceDefinition", &FGearBuilderCustomizationData::BalanceDefinition)
  ;
}
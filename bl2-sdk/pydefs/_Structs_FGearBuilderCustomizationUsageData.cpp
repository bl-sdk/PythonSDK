#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FGearBuilderCustomizationUsageData()
{
    class_< FGearBuilderCustomizationUsageData >("FGearBuilderCustomizationUsageData", no_init)
        .def_readwrite("Usage", &FGearBuilderCustomizationUsageData::Usage)
        .def_readwrite("CustomizationBalanceDefinitions", &FGearBuilderCustomizationUsageData::CustomizationBalanceDefinitions)
  ;
}
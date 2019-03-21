#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FGearBuilderCustomizationUsageData(py::object m)
{
    py::class_< FGearBuilderCustomizationUsageData >(m, "FGearBuilderCustomizationUsageData")
        .def_readwrite("Usage", &FGearBuilderCustomizationUsageData::Usage)
        .def_readwrite("CustomizationBalanceDefinitions", &FGearBuilderCustomizationUsageData::CustomizationBalanceDefinitions)
  ;
}
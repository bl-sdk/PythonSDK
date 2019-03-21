#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInteractionIconWithOverrides()
{
    py::class_< FInteractionIconWithOverrides >("FInteractionIconWithOverrides")
        .def_readwrite("IconDef", &FInteractionIconWithOverrides::IconDef)
        .def_readwrite("OverrideIconDef", &FInteractionIconWithOverrides::OverrideIconDef)
        .def_readwrite("bCostsToUse", &FInteractionIconWithOverrides::bCostsToUse)
        .def_readwrite("CostsCurrencyType", &FInteractionIconWithOverrides::CostsCurrencyType)
        .def_readwrite("CostsAmount", &FInteractionIconWithOverrides::CostsAmount)
  ;
}
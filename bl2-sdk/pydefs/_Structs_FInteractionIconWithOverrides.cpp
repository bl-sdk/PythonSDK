#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInteractionIconWithOverrides()
{
    class_< FInteractionIconWithOverrides >("FInteractionIconWithOverrides", no_init)
        .def_readwrite("IconDef", &FInteractionIconWithOverrides::IconDef)
        .def_readwrite("OverrideIconDef", &FInteractionIconWithOverrides::OverrideIconDef)
        .def_readwrite("bCostsToUse", &FInteractionIconWithOverrides::bCostsToUse)
        .def_readwrite("CostsCurrencyType", &FInteractionIconWithOverrides::CostsCurrencyType)
        .def_readwrite("CostsAmount", &FInteractionIconWithOverrides::CostsAmount)
  ;
}
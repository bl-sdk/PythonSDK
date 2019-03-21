#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLegacyCustomizationItemData()
{
    class_< FLegacyCustomizationItemData >("FLegacyCustomizationItemData", no_init)
        .def_readwrite("ItemPoolDefPath", &FLegacyCustomizationItemData::ItemPoolDefPath)
        .def_readwrite("ItemPoolKey", &FLegacyCustomizationItemData::ItemPoolKey)
        .def_readwrite("CustomizationItemPool", &FLegacyCustomizationItemData::CustomizationItemPool)
  ;
}
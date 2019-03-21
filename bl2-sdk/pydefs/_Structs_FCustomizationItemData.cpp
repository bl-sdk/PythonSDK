#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCustomizationItemData()
{
    class_< FCustomizationItemData >("FCustomizationItemData", no_init)
        .def_readwrite("ItemPoolKey", &FCustomizationItemData::ItemPoolKey)
        .def_readwrite("CustomizationItemPool", &FCustomizationItemData::CustomizationItemPool)
  ;
}
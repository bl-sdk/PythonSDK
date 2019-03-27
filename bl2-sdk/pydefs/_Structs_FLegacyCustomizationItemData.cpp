#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLegacyCustomizationItemData(py::module &m)
{
    py::class_< FLegacyCustomizationItemData >(m, "FLegacyCustomizationItemData")
        .def_readwrite("ItemPoolDefPath", &FLegacyCustomizationItemData::ItemPoolDefPath)
        .def_readwrite("ItemPoolKey", &FLegacyCustomizationItemData::ItemPoolKey)
        .def_readwrite("CustomizationItemPool", &FLegacyCustomizationItemData::CustomizationItemPool)
  ;
}
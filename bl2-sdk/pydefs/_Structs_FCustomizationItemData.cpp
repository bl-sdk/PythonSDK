#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCustomizationItemData(py::object m)
{
    py::class_< FCustomizationItemData >(m, "FCustomizationItemData")
        .def_readwrite("ItemPoolKey", &FCustomizationItemData::ItemPoolKey)
        .def_readwrite("CustomizationItemPool", &FCustomizationItemData::CustomizationItemPool)
  ;
}
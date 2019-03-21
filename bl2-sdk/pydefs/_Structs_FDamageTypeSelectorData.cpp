#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDamageTypeSelectorData()
{
    py::class_< FDamageTypeSelectorData >("FDamageTypeSelectorData")
        .def_readwrite("AssociatedDamageTypeName", &FDamageTypeSelectorData::AssociatedDamageTypeName)
        .def_readwrite("ValueIfMatched", &FDamageTypeSelectorData::ValueIfMatched)
  ;
}
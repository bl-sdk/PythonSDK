#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FManufacturerSelectorData()
{
    py::class_< FManufacturerSelectorData >("FManufacturerSelectorData")
        .def_readwrite("AssociatedManufacturerName", &FManufacturerSelectorData::AssociatedManufacturerName)
        .def_readwrite("ValueIfMatched", &FManufacturerSelectorData::ValueIfMatched)
  ;
}
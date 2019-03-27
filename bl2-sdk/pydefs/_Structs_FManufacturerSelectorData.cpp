#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FManufacturerSelectorData(py::module &m)
{
    py::class_< FManufacturerSelectorData >(m, "FManufacturerSelectorData")
        .def_readwrite("AssociatedManufacturerName", &FManufacturerSelectorData::AssociatedManufacturerName)
        .def_readwrite("ValueIfMatched", &FManufacturerSelectorData::ValueIfMatched)
  ;
}
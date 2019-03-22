#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLocalizedStringSetting(py::module &m)
{
    py::class_< FLocalizedStringSetting >(m, "FLocalizedStringSetting")
        .def_readwrite("Id", &FLocalizedStringSetting::Id)
        .def_readwrite("ValueIndex", &FLocalizedStringSetting::ValueIndex)
        .def_readwrite("AdvertisementType", &FLocalizedStringSetting::AdvertisementType)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSettingsProperty(py::object m)
{
    py::class_< FSettingsProperty >(m, "FSettingsProperty")
        .def_readwrite("PropertyId", &FSettingsProperty::PropertyId)
        .def_readwrite("Data", &FSettingsProperty::Data)
        .def_readwrite("AdvertisementType", &FSettingsProperty::AdvertisementType)
  ;
}
#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputRemappingButtonData()
{
    py::class_< FInputRemappingButtonData >("FInputRemappingButtonData")
        .def_readwrite("DefaultKeyName", &FInputRemappingButtonData::DefaultKeyName)
        .def_readwrite("RemappedKeyName", &FInputRemappingButtonData::RemappedKeyName)
        .def_readwrite("RemappedPressActions", &FInputRemappingButtonData::RemappedPressActions)
        .def_readwrite("RemappedTapActions", &FInputRemappingButtonData::RemappedTapActions)
        .def_readwrite("RemappedHoldActions", &FInputRemappingButtonData::RemappedHoldActions)
        .def_readwrite("Caption", &FInputRemappingButtonData::Caption)
  ;
}
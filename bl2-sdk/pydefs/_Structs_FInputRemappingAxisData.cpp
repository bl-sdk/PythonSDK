#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInputRemappingAxisData()
{
    py::class_< FInputRemappingAxisData >("FInputRemappingAxisData")
        .def_readwrite("DefaultAxisName", &FInputRemappingAxisData::DefaultAxisName)
        .def_readwrite("RemappedAxisName", &FInputRemappingAxisData::RemappedAxisName)
        .def_readwrite("RemappedAxisParameter", &FInputRemappingAxisData::RemappedAxisParameter)
        .def_readwrite("Caption", &FInputRemappingAxisData::Caption)
  ;
}
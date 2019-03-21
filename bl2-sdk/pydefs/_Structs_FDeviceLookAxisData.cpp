#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDeviceLookAxisData()
{
    py::class_< FDeviceLookAxisData >("FDeviceLookAxisData")
        .def_readwrite("SourceDevice", &FDeviceLookAxisData::SourceDevice)
        .def_readwrite("LookXAxisName", &FDeviceLookAxisData::LookXAxisName)
        .def_readwrite("LookYAxisName", &FDeviceLookAxisData::LookYAxisName)
  ;
}
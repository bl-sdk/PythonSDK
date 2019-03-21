#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleHandlingWheelData()
{
    py::class_< FVehicleHandlingWheelData >("FVehicleHandlingWheelData")
        .def_readwrite("BoneName", &FVehicleHandlingWheelData::BoneName)
        .def_readwrite("WheelDef", &FVehicleHandlingWheelData::WheelDef)
  ;
}
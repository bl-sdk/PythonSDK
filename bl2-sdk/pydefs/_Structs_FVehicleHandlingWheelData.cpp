#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleHandlingWheelData(py::object m)
{
    py::class_< FVehicleHandlingWheelData >(m, "FVehicleHandlingWheelData")
        .def_readwrite("BoneName", &FVehicleHandlingWheelData::BoneName)
        .def_readwrite("WheelDef", &FVehicleHandlingWheelData::WheelDef)
  ;
}
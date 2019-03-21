#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVehicleHandlingWheelData()
{
    class_< FVehicleHandlingWheelData >("FVehicleHandlingWheelData", no_init)
        .def_readwrite("BoneName", &FVehicleHandlingWheelData::BoneName)
        .def_readwrite("WheelDef", &FVehicleHandlingWheelData::WheelDef)
  ;
}
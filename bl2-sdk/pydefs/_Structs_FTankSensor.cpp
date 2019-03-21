#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTankSensor()
{
    class_< FTankSensor >("FTankSensor", no_init)
        .def_readwrite("Socket", &FTankSensor::Socket)
        .def_readwrite("Type", &FTankSensor::Type)
        .def_readwrite("SearchLength", &FTankSensor::SearchLength)
        .def_readwrite("HitLength", &FTankSensor::HitLength)
  ;
}